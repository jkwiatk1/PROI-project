#include <iostream>
#include <sstream>
#include <stdexcept>

#include "CommandObject.h"
#include "CommandValidator.h"
#include "Command.h"
#include "ValidationErrors.h"


// TODO: make this function return more specific errors.
// TODO: Replace string constants with enumerations.
ValidationErrors CommandValidator::validate(Command &command)
{
    ValidationErrors errors;

    auto command_type = command.getType();
    if (command_type == Command::ADD_COMMAND) {
        validate_add(command, errors);
    } else {
        std::stringstream error;
        error << "Invalid command: `" << command_type << "`";
        errors.addError(error.str());
    }
    return errors;
}

void CommandValidator::validate_add(Command &command, ValidationErrors &errors)
{
    if (command.objectCount() != 1)
        errors.addError("`add` should have a single object argument.");


    auto object = command.getObject(0);
    auto type = object.getType();

    if (type == CommandObject::PATIENT) {
        has_first_name_last_name(object, errors);
    } else {
        std::string error;
        error = "Invalid object type: `" + type + "`";
        errors.addError(error);
    }
}

void CommandValidator::has_first_name_last_name(CommandObject &object,
                                                ValidationErrors &errors)
{
    has_property(object, CommandObject::FIRST_NAME, errors);
    has_property(object, CommandObject::LAST_NAME, errors);
}

void CommandValidator::has_property(CommandObject &object, std::string property,
                                    ValidationErrors &errors)
{
    if (!object.hasProperty(property)) {
        std::string error;
        error = "Object '" + object.getType() + "' should have property '"
                + property + "'";
        errors.addError(error);
    }
}
