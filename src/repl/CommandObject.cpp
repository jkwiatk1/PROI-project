#include <iostream>

#include "CommandObject.h"

// Type constants
const std::string CommandObject::PATIENT = "patient";
const std::string CommandObject::DOCTOR = "doctor";
const std::string CommandObject::NURSE = "nurse";
const std::string CommandObject::PARAMEDIC = "paramedic";
const std::string CommandObject::ASSISTANT = "assistant";
const std::string CommandObject::DEPARTMENT = "department";
const std::string CommandObject::ROOM = "room";

// Fields constants
const std::string CommandObject::FIRST_NAME = "first_name";
const std::string CommandObject::LAST_NAME = "last_name";
const std::string CommandObject::SPECIALITY = "speciality";
const std::string CommandObject::DEPARTMENT_NAME = "name";
const std::string CommandObject::DEPARTMENT_NAME2 = "department";
const std::string CommandObject::ROOM_NO = "room_no";
const std::string CommandObject::CAPACITY = "capacity";
const std::string CommandObject::ID = "id";
const std::string CommandObject::DEPARTMENT_NEW_NAME = "new_name";
const std::string CommandObject::ROOM_NEW_NO = "new_no";
const std::string CommandObject::SHOW_CARD = "show_card";
const std::string CommandObject::INFO = "info";

void CommandObject::addProperty(std::string key, std::string value)
{
    properties[key] = value;
}

std::string CommandObject::getProperty(std::string key) const
{
    return properties.at(key);
}

bool CommandObject::hasProperty(std::string key) const
{
    return properties.count(key) > 0;
}

std::string CommandObject::getType(void) const
{
    return type;
}

void CommandObject::setType(std::string type)
{
    this->type = type;
}

std::ostream &operator<<(std::ostream &s, const CommandObject &command)
{
    s << "CommandObject{type = " << command.type;
    for (auto [k, v] : command.properties) {
        s << ", " << k << " = " << v;
    }
    return s << "}";
}
