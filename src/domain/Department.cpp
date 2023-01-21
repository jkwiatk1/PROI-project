#include "Department.h"
#include "Room.h"
#include <algorithm>

using namespace std;

Department::Department(string name)
{
    this->name = name;
    rooms = vector<Room>();
}

void Department::addRoom(Room room)
{
    rooms.push_back(room);
}

void Department::removeRoom(Room room)
{
    if (!room.isEmpty())
        return;

    auto ends = remove(rooms.begin(),rooms.end(),room);
    rooms.erase(ends,rooms.end());
}

bool Department::fuzzyEquals(const Department &other)
{
    return this->name.rfind(other.name,0) == 0;
}
