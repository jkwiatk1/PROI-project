#include <iostream>
#include <stdexcept>

#include "CommandObject.h"
#include "CommandValidator.h"
#include "Command.h"


// TODO: make this function return more specific errors.
// TODO: Replace string constants with enumerations.
bool CommandValidator::is_valid(Command &command)
{
    auto command_type = command.getType();
    if (command_type == Command::ADD_COMMAND) {
        return validate_add(command);
    } else {
        return false;
    }
}

bool CommandValidator::validate_add(Command &command)
{
    if (command.objectCount() != 1)
        return false;

    auto object = command.getObject(0);
    if (object.getType() != CommandObject::PATIENT)
        return false;
    if (!object.hasProperty(CommandObject::FIRST_NAME))
        return false;
    if (!object.hasProperty(CommandObject::LAST_NAME))
        return false;

    return true;
}
