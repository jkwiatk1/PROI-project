#pragma once

#include "Employee.h"
#include "Patient.h"

enum Speciality { Ophthalmologist, Surgeon, Cardiologist, Neurologist };

class Doctor : public Employee
{
  private:
    Speciality speciality;

  public:
    Doctor(std::string first_name, std::string last_name,
           Speciality speciality);

    Speciality getSpeciality() const;
    void setSpeciality(Speciality speciality);

    void examine(Patient &patient);
    void performSurgery(Patient &patient);
    void prescribeMedicine(Patient &patient, std::vector<std::string> medicines);

    bool fuzzyEquals(const Doctor &other);
};

