#include <iostream>

#include "CommandObject.h"
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
