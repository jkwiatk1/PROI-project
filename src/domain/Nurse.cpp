#include "Nurse.h"

using namespace std;

Nurse::Nurse(string first_name, string last_name)
    : Employee(first_name, last_name)
{
}

void Nurse::administerMedicine(Patient &patient)
{
    addEntry(patient, "Medicine given");
}

Nurse &Nurse::operator=(const Nurse &source)
{
    // TODO: insert return statement here
}
