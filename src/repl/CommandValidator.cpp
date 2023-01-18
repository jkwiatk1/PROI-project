#include <iostream>
#include <stdexcept>

#include "CommandValidator.h"
#include "ReplConstants.h"

using namespace ReplConstants;

// TODO: make this function return more specific errors.
// TODO: Replace string constants with enumerations.
// TODO: Make Command class more structured.
bool CommandValidator::is_valid(Command &command)
{
    auto command_type = command.getCommandType();
    if (command_type == ADD_COMMAND) {
        return validate_add(command);
    } else {
        return false;
    }
}

bool CommandValidator::validate_add(Command &command)
{
    auto object = command.getObject(OBJ1);
    if (!(object[OBJECT_TYPE] == PATIENT))
        return false;
    if (!(object.count("first_name") == 1))
        return false;
    if (!(object.count("last_name") == 1))
        return false;
    return true;
}
