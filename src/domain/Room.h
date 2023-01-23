#pragma once

#include "Patient.h"
#include "full_room_exception.h"
#include <vector>

class Room
{
  private:
    int nr;
    int capacity;
    std::vector<Patient *> patients;

  public:
    Room(int nr, int capacity);

    int getNr() const;
    int getCapacity() const;
    void setNr(int nr);
    void setCapacity(int capacity);

    void addPatient(Patient *patient);
    void removePatient(Patient *patient);
    bool isEmpty() const;

    bool fuzzyEquals(const Room &other);
    bool operator==(const Room &other);
};

