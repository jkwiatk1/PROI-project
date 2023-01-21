#include <any>
#include <iostream>
#include <antlr4-runtime.h>
#include "Command.h"
#include "CommandObject.h"
#include "Repl.h"
#include "DataContainer.h"
#include "ReplCommandsLexer.h"
#include "ReplCommandsParser.h"
#include "CommandValidator.h"
#include "TreeVisitor.h"

Repl::Repl(std::istream &is, std::ostream &os, DataContainer &data_container)
    : is(is), os(os), command_executor(data_container)
{
}

void Repl::prompt(void)
{
    os << "$ ";
}

void Repl::print_greeting(void)
{
    std::string greeting(
        "Hospital Database (c) 2022 Kwiatkowski, Marczak, Targosiński\n"
        "Enter commands below:");
    os << greeting << std::endl;
}

void Repl::print_exit_message(void)
{
    std::string farewell("Exiting...");
    os << farewell << std::endl;
}

void Repl::print_success_message(std::string operation)
{
    os << operation << " completed succesfully!" << std::endl;
}

void Repl::print_failure_message(std::string operation)
{
    os << operation << " failed!" << std::endl;
}

void Repl::print_errors(Errors &errors)
{
    os << "Error! The following errors were encountered:" << std::endl;
    for (auto e : errors)
        os << "- " << e << "." << std::endl;
}

void Repl::run(void)
{
    print_greeting();
    prompt();
    for (std::string line; std::getline(is, line); prompt()) {
        line += '\n';
        execute_command(line);
    }
    os << std::endl;
    print_exit_message();
}

// TODO: look at c++ antlr examples and locate the leak.
void Repl::execute_command(std::string &commandline)
{
    // Note: the following 5 lines cannot be extracted to a function, because
    // the ParseTree object lives only as long as its ReplCommandsParser.
    antlr4::ANTLRInputStream input(commandline);
    ReplCommandsLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    ReplCommandsParser parser(&tokens);

    // TODO: add an error strategy which stops parsing and throws an exception
    // upon an error.
    // parser.setErrorHandler(BailErrorStrategy());

    antlr4::tree::ParseTree *tree = parser.commandLine();
    os << tree->toStringTree(&parser) << std::endl;

    auto result = parse_tree_to_command(tree);
    if (!result.has_value())
        return;

    auto command = result.value();

    std::cout << command << std::endl;

    auto errors = CommandValidator::validate(command);
    if (errors.exist()) {
        print_errors(errors);
        return;
    }

    command_executor.executeCommand(command);
}

std::optional<Command> Repl::parse_tree_to_command(antlr4::tree::ParseTree *tree)
{
    TreeVisitor visitor;
    auto result = visitor.visit(tree);
    if (result.has_value())
        return std::any_cast<Command>(result);
    else
        return {};
}
