#pragma once

#include <iostream>
#include <antlr4-runtime.h>

#include "DataContainer.h"
#include "ReplCommandsParser.h"
#include "Command.h"
#include "ValidationErrors.h"

class Repl {
    private:
        friend class TreeListener;
        std::istream &is;
        std::ostream &os;
        DataContainer &data_container;
        void prompt(void);
        void print_greeting(void);
        void print_exit_message(void);
        void execute_command(std::string &commandline);
        Command parse_tree_to_command(antlr4::tree::ParseTree *tree);
        void perform_data_operation(Command &command);
        void print_success_message(std::string operation);
        void print_failure_message(std::string operation);
        void print_errors(ValidationErrors &errors);

      public:
        Repl(std::istream &is, std::ostream &os, DataContainer &data_container);
        void run(void);
};
