#include "Doctor.h"
#include "Employee.h"
#include "Patient.h"

using namespace std;

Doctor::Doctor(string first_name, string last_name, Speciality speciality)
    : Employee(first_name, last_name)
{
    this->speciality = speciality;
}

Speciality Doctor::getSpeciality() const
{
    return speciality;
}

void Doctor::setSpeciality(Speciality speciality)
{
    this->speciality = speciality;
}

void Doctor::examine(Patient &patient)
{
    addEntry(patient, "Examination");
}

void Doctor::performSurgery(Patient &patient)
{
    addEntry(patient, "Performed surgery");
}

void Doctor::prescribeMedicine(Patient &patient, vector<string> medicines)
{
    string entry_message = "Prescribed medicines: ";
    int size = medicines.size();
    for (int i = 0; i < size; i++)
    {
        entry_message += medicines[i];
        if (i < size - 1)
            entry_message += ", ";
    }
    
    addEntry(patient, entry_message);
}

bool Doctor::fuzzyEquals(const Doctor &other)
{
    return Person::fuzzyEquals(other) &&
        this->speciality == other.speciality;
}