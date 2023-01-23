#include "Employee.h"
#include "Entry.h"
#include "Patient.h"

Employee::Employee() : Person() {}

Employee::Employee(std::string first_name, std::string last_name)
    : Person::Person(first_name, last_name)
{
}

void Employee::addEntry(Patient &patient, std::string action)
{
    patient.addEntry(Entry(action, this));
}
