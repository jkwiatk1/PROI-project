#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Command.h"
#include "ReplConstants.h"

using ReplConstants::COMMAND_TYPE, ReplConstants::OBJECT_TYPE;

void Command::setCommandType(std::string type)
{
    properties[COMMAND_TYPE] = type;
}

void Command::addProperty(std::string key, std::string value)
{
    properties[key] = value;
}

void Command::setObjectType(std::string object_tag, std::string type)
{
    properties[object_tag + "_" + OBJECT_TYPE] = type;
}

void Command::addObjectProperty(std::string object_tag, std::string key,
                                std::string value)
{
    properties[object_tag + "_" + key] = value;
}

std::string Command::getCommandType(void) const
{
    return properties.at(COMMAND_TYPE);
}

std::string Command::getProperty(std::string key) const
{
    return properties.at(key);
}

std::map<std::string, std::string>
Command::getObject(std::string object_tag) const
{
    std::map<std::string, std::string> object;
    for (auto kv : properties) {
        auto k = kv.first;
        auto v = kv.second;
        if (k.rfind(object_tag, 0))
            continue;
        k.erase(0, object_tag.size() + 1);
        object[k] = v;
    }
    return object;
}

std::ostream &operator<<(std::ostream &s, const Command command)
{
    s << "Command{" << std::endl;
    for (auto kv : command.properties) {
        auto k = kv.first;
        auto v = kv.second;
        s << "\t" << k << " = " << v << std::endl;
    }
    s << "}" << std::endl;
    return s;
}
