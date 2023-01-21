#include "Room.h"
#include <iostream>
#include <algorithm>

using namespace std;

Room::Room(int nr, int capacity)
{
    this->nr = nr;
    this->capacity = capacity;
    patients = vector<Patient *>();
}

void Room::addPatient(Patient *patient)
{
    if (patients.size() < capacity)
        patients.push_back(patient);
    else {
        cout << "The room nr " << nr << "is full!" << endl
             << "Cannot add patient " << patient->getName().first << " "
             << patient->getName().second << endl;
    }
}

void Room::removePatient(Patient *patient)
{
    auto ends = remove(patients.begin(), patients.end(), patient);

    patients.erase(ends, patients.end());
}

bool Room::isEmpty() const
{
    return patients.size() == 0;
}

bool Room::fuzzyEquals(const Room &other)
{
    return this->nr == other.nr;
}