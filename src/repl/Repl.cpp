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

void Repl::run(void)
{
    os << "$ ";
    std::string line;
    std::getline(is, line);
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