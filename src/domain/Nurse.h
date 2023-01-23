#pragma once

#include "Employee.h"
#include "Patient.h"

class Nurse : public Employee
{
  private:
  public:
    Nurse();
    Nurse(std::string first_name, std::string last_name);

    void administerMedicine(Patient &patient, std::string medicine);
};

