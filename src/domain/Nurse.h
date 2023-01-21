#pragma once

#include "Employee.h"
#include "Patient.h"

class Nurse : public Employee
{
  private:
  public:
    Nurse(std::string first_name, std::string last_name);

    // pytanie czy robic klase Medicine
    void administerMedicine(Patient &patient);
};

