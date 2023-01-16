#pragma once

#include "Employee.h"
#include "Patient.h"
#include "Room.h"

// salowy
class Assistant : public Employee
{
  private:
  public:
    Assistant(std::string first_name, std::string last_name);

    void putPatient(Patient *Patient, Room &room);
    void dischargePatient(Patient *Patient, Room &room);
};

