#include "Patient.h"
#include "Room.h"
#include "Assistant.h"


using namespace std;

Assistant::Assistant(string first_name, string last_name)
    : Employee(first_name, last_name)
{
}

void Assistant::hospitalizePatient(Patient &patient)
{
    patient.hospitalize();
    addEntry(patient,"Hospitalized");
}

void Assistant::putPatient(Patient *patient, Room *room)
{
    room->addPatient(patient);
    patient->assignRoom(room);
    addEntry(*patient, "Put in room " + to_string(room->getNr()));
}

void Assistant::dischargePatient(Patient *patient)
{
    Room *room = patient->getRoom();
    if (room != nullptr)
    {
        room->removePatient(patient);
        patient->exitRoom();
    }

    patient->discharge();
    addEntry(*patient, "Discharged");
}
