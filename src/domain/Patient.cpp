#include <iostream>
#include "Patient.h"

using namespace std;

Patient::Patient() : Person() {}

Patient::Patient()
{
}

Patient::Patient(string first_name, string last_name)
    : Person(first_name, last_name)
{
    health_card = vector<Entry>();
    status = Hospitalized;
    assigned_room = nullptr;
}

std::vector<Entry> Patient::getHealthCard() const
{
    return health_card;
}

Room *Patient::getRoom() const
{
    return assigned_room;
}

void Patient::hospitalize()
{
    status = Hospitalized;
}

void Patient::discharge()
{
    status = Discharged;
}

void Patient::assignRoom(Room *room)
{
    assigned_room = room;
}

void Patient::exitRoom()
{
    assigned_room = nullptr;
}

void Patient::addEntry(Entry entry)
{
    health_card.push_back(entry);
}

std::ostream &operator<<(std::ostream &s, const Patient &patient)
{
    return s << "Patient{id = " << patient.getID()
             << ", first_name = " << patient.getFirstName()
             << ", last_name = " << patient.getLastName() << "}";
}
