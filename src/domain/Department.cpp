#include "Department.h"
#include "Room.h"

using namespace std;

Department::Department(string name)
{
    this->name = name;
    rooms = vector<Room>();
}

string Department::getName() const
{
    return name;
}

void Department::addRoom(Room room)
{
    rooms.push_back(room);
}

Department &Department::operator=(const Department &source)
{
    // TODO: insert return statement here
}
