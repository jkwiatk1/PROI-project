#pragma once

#include "Room.h"

class Department
{
private:
    std::vector<Room> rooms;
    std::string ID;
    std::string name;
public:
    Department(std::string ID, std::string name);

    void addRoom(Room room);
};

