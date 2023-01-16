#include <iostream>

#include <antlr4-runtime.h>
#include "ReplCommandsLexer.h"
#include "ReplCommandsParser.h"
#include "ReplCommandsBaseListener.h"


int main(void)
{
    std::string line;
    std::getline(std::cin, line);
    line += '\n';

    antlr4::ANTLRInputStream input(line);
    ReplCommandsLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    ReplCommandsParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.commandLine();

    std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

    return 0;
}
