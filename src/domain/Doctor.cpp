#include "Doctor.h"
#include "Employee.h"
#include "Patient.h"
#include <iostream>
#include <string>

using namespace std;

Doctor::Doctor() : Employee()
{
}

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
    for (int i = 0; i < size; i++) {
        entry_message += medicines[i];
        if (i < size - 1)
            entry_message += ", ";
    }

    addEntry(patient, entry_message);
}

bool Doctor::fuzzyEquals(const Doctor &other)
{
    return Person::fuzzyEquals(other) && this->speciality == other.speciality;
}

std::optional<Speciality> Doctor::parseSpeciality(std::string speciality)
{
    if (speciality == "Ophthalmologist")
        return Speciality::Ophthalmologist;
    else if (speciality == "Surgeon")
        return Speciality::Surgeon;
    else if (speciality == "Cardiologist")
        return Speciality::Cardiologist;
    else if (speciality == "Neurologist")
        return Speciality::Neurologist;
    else
        return {};
}

std::optional<std::string> Doctor::toSpeciality(int n)
{
    switch (n) {
    case 0:
        return "Ophthalmologist";
    case 1:
        return "Surgeon";
    case 2:
        return "Cardiologist";
    case 3:
        return "Neurologist";
    default:
        return {};
    }
}

std::vector<std::string> Doctor::getSpecialities(void)
{
    return {"Ophthalmologist", "Surgeon", "Cardiologist", "Neurologist"};
}

std::ostream &operator<<(std::ostream &s, const Doctor &doctor)
{
    std::string speciality =
        Doctor::toSpeciality(doctor.getSpeciality())
            .value_or(std::to_string(doctor.getSpeciality()));
    return s << "Doctor{id = " << doctor.getID()
             << ", first_name = " << doctor.getFirstName()
             << ", last_name = " << doctor.getLastName()
             << ", speciality = " << speciality << "}";
}
