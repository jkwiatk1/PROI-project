#pragma once

#include <iostream>
#include <antlr4-runtime.h>
#include "DataContainer.h"
#include "ReplCommandsParser.h"

class Repl {
    private:
        typedef std::map<std::string, std::string> CommandData;
        friend class TreeListener;
        std::istream &is;
        std::ostream &os;
        DataContainer &data_container;
        void prompt(void);
        void print_greeting(void);
        void print_exit_message(void);
        void execute_command(std::string &commandline);
        CommandData parse_tree_to_command(antlr4::tree::ParseTree *tree);
        bool is_valid(CommandData command);
        void perform_data_operation(CommandData command);

      public:
        Repl(std::istream &is, std::ostream &os, DataContainer &data_container);
        void run(void);
};
