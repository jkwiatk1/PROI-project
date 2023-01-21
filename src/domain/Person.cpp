#include "Person.h"

using namespace std;

int Person::ID_control = 0;

Person::Person()
{
    ID_control++;
    ID = ID_control;
}

Person::Person(std::string first_name, std::string last_name) : Person()
{
    this->first_name = first_name;
    this->last_name = last_name;
}

pair<string, string> Person::getName() const
{
    return pair<string, string>(first_name, last_name);
}

bool Person::fuzzyEquals(const Person &other)
{
    return this->first_name.rfind(other.first_name,0) == 0 ||
        this->last_name.rfind(other.last_name,0);
}