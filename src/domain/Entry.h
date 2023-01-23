#pragma once

#include "Employee.h"
#include <string>

class Entry
{
  private:
    std::string action;
    Employee *performer;

  public:
    Entry(std::string action, Employee *performer);
    friend std::ostream &operator<<(std::ostream &s, const Entry &entry);
};

