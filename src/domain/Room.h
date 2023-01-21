#pragma once

#include "Patient.h"
#include <vector>

class Room
{
  private:
    int nr;
    int capacity;
    std::vector<Patient *> patients;

  public:
    Room(int nr, int capacity);

    void addPatient(Patient *patient);
    void removePatient(Patient *patient);
};

