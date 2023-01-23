#pragma once

#include <iostream>
#include <antlr4-runtime.h>
#include <optional>

#include "CommandExecutor.h"
#include "DataContainer.h"
#include "ReplCommandsParser.h"
#include "Command.h"
#include "Errors.h"

class Repl {
    private:
        friend class TreeListener;
        std::istream &is;
        std::ostream &os;
        CommandExecutor command_executor;
        void prompt(void);
        void print_greeting(void);
        void print_exit_message(void);
        void execute_command(std::string &commandline);
        std::optional<Command> parse_tree_to_command(antlr4::tree::ParseTree *tree);
        void perform_data_operation(Command &command);
        void print_errors(Errors &errors);
        void print_results(Results &results);

      public:
        Repl(std::istream &is, std::ostream &os, DataContainer &data_container);
        void run(void);
};
