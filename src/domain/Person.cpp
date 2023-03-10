#include "Person.h"

using namespace std;

int Person::ID_control = 0;

Person::Person(bool do_id)
{
    if (do_id)
    {
        // Do not change the order of the two following operations, or the
        // search mechanism will catch on fire.
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

void Person::setID(int id)
{
    ID = id;
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
    if (other.ID == 0)
        return this->first_name.rfind(other.first_name,0) == 0 &&
            this->last_name.rfind(other.last_name,0) == 0;
    else
        return this->first_name.rfind(other.first_name,0) == 0 &&
            this->last_name.rfind(other.last_name,0) == 0 && ID == other.ID;
}
