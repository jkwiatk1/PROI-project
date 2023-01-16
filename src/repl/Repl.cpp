#include <iostream>
#include "Repl.h"
#include "DataContainer.h"
#include <antlr4-runtime.h>
#include "ReplCommandsLexer.h"
#include "ReplCommandsParser.h"
#include "ReplCommandsBaseListener.h"

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

        antlr4::ANTLRInputStream input(line);
        ReplCommandsLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        for (auto token : tokens.getTokens()) {
            os << token->toString() << std::endl;
        }

        ReplCommandsParser parser(&tokens);
        antlr4::tree::ParseTree *tree = parser.commandLine();

        os << tree->toStringTree(&parser) << std::endl << std::endl;
    }
    os << std::endl;
    print_exit_message();
}
