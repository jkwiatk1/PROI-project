#include <iostream>
#include <ctime>
#include "Entry.h"

Entry::Entry(std::string action, Employee *performer)
{
    this->action = action;
    this->performer = performer;

    char buf[20];
    time_t now = std::time(NULL);
    strftime(buf,20, "%Y-%m-%d %H:%M:%S", localtime(&now));
    this->time = buf;
}


std::ostream &operator<<(std::ostream &s, const Entry &entry)
{
    return s << "Entry{time = " << time << ", performer = " << entry.performer->getFirstName() << " "
             << entry.performer->getLastName() << ", action = " << entry.action
             << "}";
}
