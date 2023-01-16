#pragma once

#include "Person.h"
#include "Patient.h"
#include "Entry.h"

class Employee : public Person
{
private:
public:
    Employee(std::string first_name, std::string last_name);

    void addEntry(Patient& patient, std::string action);
};

