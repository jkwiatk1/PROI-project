#include "Person.h"

using namespace std;

int Person::ID_control = 0;

Person::Person(bool do_id)
{
    if (do_id)
    {
        ID_control++;
        ID = ID_control;
    }
    else
        ID = 0;
    
}

Person::Person() : Person(false) {}

Person::Person(std::string first_name, std::string last_name) : Person(true)
{
    this->first_name = first_name;
    this->last_name = last_name;
}

int Person::getID() const
{
    return ID;
}

string Person::getFirstName() const
{
    return this->first_name;
}

string Person::getLastName() const
{
    return this->last_name;
}

void Person::setFirstName(string first_name)
{
    this->first_name = first_name;
}

void Person::setLastName(string last_name)
{
    this->last_name = last_name;
}

bool Person::fuzzyEquals(const Person &other)
{
    return this->first_name.rfind(other.first_name,0) == 0 &&
        this->last_name.rfind(other.last_name,0) == 0;
}
