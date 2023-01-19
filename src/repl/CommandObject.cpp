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
    for (auto kv : command.properties) {
        auto k = kv.first;
        auto v = kv.second;
        s << ", " << k << " = " << v;
    }
    return s << "}";
}
