#pragma once

#include <string>

class Person
{
private:
    static int ID_control;
    int ID;
    std::string first_name;
    std::string last_name;
public:
    Person();
    Person(std::string first_name, std::string last_name);
};


