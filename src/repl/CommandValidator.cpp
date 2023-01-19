#include <iostream>
#include <stdexcept>

#include "CommandValidator.h"
#include "ReplConstants.h"
#include "Command.h"

using namespace ReplConstants;

// TODO: make this function return more specific errors.
// TODO: Replace string constants with enumerations.
// TODO: Make Command class more structured.
bool CommandValidator::is_valid(Command &command)
{
    auto command_type = command.getType();
    if (command_type == ADD_COMMAND) {
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
    if (object.getType() != PATIENT)
        return false;
    if (!object.hasProperty("first_name"))
        return false;
    if (!object.hasProperty("last_name"))
        return false;

    return true;
}
