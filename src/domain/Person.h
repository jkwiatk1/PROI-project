#pragma once

#include <string>

class Person
{
  protected:
    static int ID_control;
    int ID;
    std::string first_name;
    std::string last_name;

  public:
    Person();
    Person(std::string first_name, std::string last_name);

    int getID() const;

    std::pair<std::string, std::string> getName() const;
    
};

