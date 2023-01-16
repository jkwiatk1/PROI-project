#pragma once

#include <iostream>
#include "DataContainer.h"

class Repl {
    private:
        std::istream &is;
        std::ostream &os;
        DataContainer &data_container;
        void prompt(void);
        void print_greeting(void);
        void print_exit_message(void);

      public:
        Repl(std::istream &is, std::ostream &os, DataContainer &data_container);
        void run(void);
};
