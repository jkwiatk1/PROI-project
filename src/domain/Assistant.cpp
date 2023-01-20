#include "Patient.h"
#include "Room.h"
#include "Assistant.h"

using namespace std;

Assistant::Assistant(string first_name, string last_name)
    : Employee(first_name, last_name)
{
}

void Assistant::putPatient(Patient *patient, Room &room)
{
    room.addPatient(patient);
}

void Assistant::dischargePatient(Patient *patient, Room &room)
{
    room.removePatient(patient);
    patient->discharge();
}


Assistant & Assistant::operator=(const Assistant & source)
{
// TODO: insert return statement here
}
