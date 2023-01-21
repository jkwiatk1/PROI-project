#pragma once

#include "Employee.h"
#include "Patient.h"

// TODO: rename Specialities -> Speciality
enum Speciality { oculist, surgeon, cardiologist, neurologist };

class Doctor : public Employee
{
  private:
    Speciality speciality;

  public:
    Doctor(std::string first_name, std::string last_name,
           Speciality speciality);

    void examine(Patient &patient);
    void prescribeMedicine(Patient &patient, std::string medicine);
    bool fuzzyEquals(const Doctor &other);
};

