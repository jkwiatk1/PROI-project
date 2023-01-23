#include <iostream>
#include "Entry.h"

Entry::Entry(std::string action, Employee *performer)
{
    this->action = action;
    this->performer = performer;
}


std::ostream &operator<<(std::ostream &s, const Entry &entry)
{
    return s << "Entry{performer = " << entry.performer->getFirstName() << " "
             << entry.performer->getLastName() << ", action = " << entry.action
             << "}";
}
