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
