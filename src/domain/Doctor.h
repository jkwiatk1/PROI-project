#pragma once

#include "Employee.h"
#include "Patient.h"

// TODO: rename Specialities -> Speciality
enum Specialities { oculist, surgeon, cardiologist, neurologist };

class Doctor : public Employee
{
  private:
    Specialities speciality;

  public:
    Doctor(std::string first_name, std::string last_name,
           Specialities speciality);

    void examine(Patient &patient);
    void prescribeMedicine(Patient &patient, std::string medicine);
    bool fuzzyEquals(const Doctor &other);
};

