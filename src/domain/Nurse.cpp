#include <iostream>
#include "Nurse.h"

using namespace std;

Nurse::Nurse() : Employee() {}

Nurse::Nurse(string first_name, string last_name)
    : Employee(first_name, last_name)
{
}

void Nurse::administerMedicine(Patient &patient, string medicine)
{
    addEntry(patient, "Medicine given: " + medicine);
}

std::ostream &operator<<(std::ostream &s, const Nurse &nurse)
{
    return s << "Nurse{id = " << nurse.getID()
             << ", first_name = " << nurse.getFirstName()
             << ", last_name = " << nurse.getLastName() << "}";
}
