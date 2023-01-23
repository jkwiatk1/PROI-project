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
    std::string getFirstName() const;
    std::string getLastName() const;
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);

    bool fuzzyEquals(const Person &other);
};

