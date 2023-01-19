#include <iostream>
#include <antlr4-runtime.h>
#include "Command.h"
#include "CommandObject.h"
#include "Repl.h"
#include "DataContainer.h"
#include "ReplCommandsLexer.h"
#include "ReplCommandsParser.h"
#include "ReplCommandsBaseListener.h"
#include "CommandValidator.h"
#include "TreeListener.h"

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

void Repl::print_errors(ValidationErrors &errors)
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

// TODO: finish
// TODO: look at c++ antlr examples and locate the leak.
void Repl::execute_command(std::string &commandline)
{
    // Parse the commandline
    antlr4::ANTLRInputStream input(commandline);
    ReplCommandsLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    ReplCommandsParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.commandLine();

    os << tree->toStringTree(&parser) << std::endl;

    // Process the tree
    auto command = parse_tree_to_command(tree);
    std::cout << command << std::endl;

    // Validate the command
    auto errors = CommandValidator::validate(command);
    if (errors.exist()) {
        print_errors(errors);
        return;
    }

    // Perform operations on data
    command_executor.executeCommand(command);
}

Command Repl::parse_tree_to_command(antlr4::tree::ParseTree *tree)
{
    antlr4::tree::ParseTreeWalker walker;
    TreeListener listener;
    walker.walk(&listener, tree);
    return listener.getCommand();
}
