#pragma once

#include <iostream>
#include "DataContainer.h"

class Repl {
    private:
        std::istream &is;
        std::ostream &os;
        DataContainer &data_container;
    public:
        Repl(std::istream &is, std::ostream &os, DataContainer &data_container);
        void run(void);
};
