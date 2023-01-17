#include <iostream>
#include "Repl.h"
#include "DataContainer.h"
#include <antlr4-runtime.h>
#include <tree/ParseTreeWalker.h>
#include "ReplCommandsLexer.h"
#include "ReplCommandsParser.h"
#include "ReplCommandsBaseListener.h"
#include "TreeListener.h"

Repl::Repl(std::istream &is, std::ostream &os, DataContainer &data_container)
    : is(is), os(os), data_container(data_container)
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

    // Validate the command
    if (!is_valid(command)) {
        os << "Error: invalid command (TODO: make this message more helpful)."
           << std::endl;
        return;
    }

    os << "Command type: " << command["command_type"] << std::endl;

    // Perform operations on data
    perform_data_operation(command);
}

Repl::CommandData Repl::parse_tree_to_command(antlr4::tree::ParseTree *tree)
{
    antlr4::tree::ParseTreeWalker walker;
    TreeListener listener;
    walker.walk(&listener, tree);
    return listener.getCommandData();
}

bool Repl::is_valid(CommandData command)
{
    // TODO: implement
    return true;
}

void Repl::perform_data_operation(CommandData command)
{
    // TODO: implement
}
