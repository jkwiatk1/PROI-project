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
    // discharge all patients from the room prehaps?
    auto ends = remove(rooms.begin(),rooms.end(),room);
    
    rooms.erase(ends,rooms.end());
}
