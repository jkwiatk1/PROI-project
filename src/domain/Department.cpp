#include "Department.h"
#include "Room.h"
#include <algorithm>
#include <iostream>

using namespace std;

Department::Department(string name)
{
    this->name = name;
    rooms = vector<Room>();
}

std::string Department::getName() const
{
    return name;
}

void Department::setName(std::string name)
{
    this->name = name;
}

void Department::addRoom(Room room)
{
    rooms.push_back(room);
}

void Department::removeRoom(Room room)
{
    if (!room.isEmpty())
        throw Room_not_empty_exception(room.getNr());

    auto ends = remove(rooms.begin(), rooms.end(), room);
    rooms.erase(ends, rooms.end());
}

void Department::removeAllRooms()
{
    for (auto room : rooms)
        if (!room.isEmpty())
            throw Room_not_empty_exception(room.getNr());

    rooms.clear();
}

bool Department::fuzzyEquals(const Department &other)
{
    return this->name.rfind(other.name, 0) == 0;
}

std::ostream &operator<<(std::ostream &s, const Department &patient)
{
    return s << "Department{name = " << patient.name
             << ", room_count = " << patient.rooms.size() << "}";
}


std::vector<Room> Department::getDepartmentRooms() const
{
    std::vector<Room> department_rooms;
    for(auto it : rooms){
        department_rooms.push_back(it);
    }
    return department_rooms;
}