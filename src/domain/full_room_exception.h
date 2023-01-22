#pragma once

#include <stdexcept>

// TODO: rename `Full_room_exception` -> `full_room`
class Full_room_exception : public std::runtime_error
{
  public:
    Full_room_exception(int room_nr)
        : std::runtime_error("Room nr " + std::to_string(room_nr) + " is full!")
    {
    }
};
