#include "Doctor.h"
#include "Employee.h"
#include "Patient.h"

using namespace std;

Doctor::Doctor(string first_name, string last_name, Specialities speciality)
    : Employee(first_name, last_name)
{
    this->speciality = speciality;
}

void Doctor::examine(Patient &patient)
{
    addEntry(patient, "Examination");
}

void Doctor::prescribeMedicine(Patient &patient, string medicine)
{

    addEntry(patient, "Prescribed medicine: " + medicine);
}

bool Doctor::fuzzyEquals(const Doctor &other)
{
    return Person::fuzzyEquals(other) ||
        this->speciality == other.speciality;
}