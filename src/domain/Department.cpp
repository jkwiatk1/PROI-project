#include "Department.h"
#include "Room.h"

using namespace std;

Department::Department(string ID, string name)
{
    this->ID = ID;
    this->name = name;
    rooms = vector<Room>();
}

void Department::addRoom(Room room)
{
    rooms.push_back(room);
}

Department &Department::operator=(const Department &source)
{
    // TODO: insert return statement here
}
