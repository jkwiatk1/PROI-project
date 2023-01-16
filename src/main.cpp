#include <iostream>

#include "Repl.h"
#include "DataContainer.h"


int main(void)
{
    DataContainer dataContainer;
    Repl repl(std::cin, std::cout, dataContainer);
    repl.run();
    return 0;
}
