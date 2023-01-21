#include "headers/Room.h"
#include <iostream>
#include <algorithm>

using namespace std;

Room::Room(int nr, int capacity) {
    this->nr = nr;
    this->capacity = capacity;
    patients = vector<Patient*>();
}

void Room::addPatient(Patient* patient) {
    if (patients.size() < capacity)
        patients.push_back(patient);
    else {
        cout << "The room nr " << nr << "is full!" << endl
            << "Cannot add patient " << patient->getName().first
            << " " << patient->getName().second << endl;
    }
}

void Room::removePatient(Patient* patient) {
    // we DON'T want to `delete patient;`
    vector<Patient*>::iterator ends = remove(patients.begin(), patients.end(), patient);
    patients.erase(ends, patients.end());
}