#include <iostream>

#include "InMemoryDataContainer.h"
#include "Repl.h"


int main(void)
{
    InMemoryDataContainer& dataContainer = InMemoryDataContainer::getInstance();
    Repl repl(std::cin, std::cout, dataContainer);
    repl.run();
    return 0;
}
