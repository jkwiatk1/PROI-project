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

int Room::getNr() const
{
    return nr;
}

int Room::getCapacity() const
{
    return capacity;
}

void Room::setNr(int nr)
{
    this->nr = nr;
}

void Room::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void Room::addPatient(Patient *patient)
{
    if (patients.size() >= capacity)
        throw Full_room_exception(nr);

    patients.push_back(patient);
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

// TODO: test if this operator is appropriate.
bool Room::operator==(const Room &other)
{
    if (this == &other)
        return true;
    return nr == other.nr && capacity == other.capacity;
}

std::ostream &operator<<(std::ostream &s, const Room &room)
{
    s << "Room{room_no = " << room.nr << ", capacity = " << room.capacity
      << ", patients = [";
    bool first = true;
    for (auto p : room.patients) {
        if (!first) s << ", ";
        s << *p;
        first = false;
    }
    return s << "]}";
}
