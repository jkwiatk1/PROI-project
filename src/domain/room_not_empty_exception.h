#pragma once

#include <stdexcept>

class Room_not_empty_exception : public std::runtime_error
{
public:
    Room_not_empty_exception(int room_nr);
};

Room_not_empty_exception::Room_not_empty_exception(int room_nr) :
    std::runtime_error("Room nr " + std::to_string(room_nr) + " is not empty!") {}