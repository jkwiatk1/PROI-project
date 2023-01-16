#include "headers/Nurse.h"

using namespace std;

Nurse::Nurse(string first_name, string last_name) : 
    Employee(first_name, last_name) {}

void Nurse::administerMedicine(Patient& patient) {
    addEntry(patient, "Medicine given");
}