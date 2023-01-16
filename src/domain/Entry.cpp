#include "headers/Entry.h"

Entry::Entry(std::string action, Employee* performer) {
    this->action = action;
    this->performer = performer;
}