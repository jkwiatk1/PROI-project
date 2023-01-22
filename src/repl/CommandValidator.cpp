#include <iostream>
#include <sstream>
#include <stdexcept>

#include "CommandObject.h"
#include "CommandValidator.h"
#include "Command.h"
#include "Errors.h"


// TODO: make this function return more specific errors.
// TODO: Replace string constants with enumerations.
Errors CommandValidator::validate(Command &command)
{
    Errors errors;

    auto command_type = command.getType();
    if (command_type == Command::ADD_COMMAND) {
        validate_add(command, errors);
    } else if (command_type == Command::DELETE_COMMAND) {
        validate_delete(command, errors);
    } else {
        std::string error = "Invalid command type: `" + command_type + "`";
        errors.addError(error);
    }
    return errors;
}

void CommandValidator::validate_add(Command &command, Errors &errors)
{
    if (command.objectCount() != 1)
        errors.addError("`add` should have a single object argument.");


    auto object = command.getObject(0);
    auto type = object.getType();

    if (type == CommandObject::PATIENT) {
        has_first_name_and_last_name(object, errors);
    } else if (type == CommandObject::DOCTOR) {
        has_first_name_and_last_name(object, errors);
        has_property(object, CommandObject::SPECIALITY, errors);
    } else if (type == CommandObject::NURSE) {
        has_first_name_and_last_name(object, errors);
    } else if (type == CommandObject::PARAMEDIC) {
        has_first_name_and_last_name(object, errors);
    } else if (type == CommandObject::ASSISTANT) {
        has_first_name_and_last_name(object, errors);
    } else if (type == CommandObject::DEPARTMENT) {
        has_property(object, CommandObject::DEPARTMENT_NAME, errors);
    } else if (type == CommandObject::ROOM) {
        has_property(object, CommandObject::DEPARTMENT_NAME2, errors);
        has_property(object, CommandObject::ROOM_NO, errors);
        is_int(object, CommandObject::ROOM_NO, errors);
        has_property(object, CommandObject::CAPACITY, errors);
        is_int(object, CommandObject::CAPACITY, errors);
    } else {
        std::string error = "Invalid object type: `" + type + "`";
        errors.addError(error);
    }
}

void CommandValidator::has_first_name_and_last_name(CommandObject &object,
                                                    Errors &errors)
{
    has_property(object, CommandObject::FIRST_NAME, errors);
    has_property(object, CommandObject::LAST_NAME, errors);
}

void CommandValidator::has_property(CommandObject &object, std::string property,
                                    Errors &errors)
{
    if (!object.hasProperty(property)) {
        std::string error = "Object '" + object.getType()
                            + "' should have property '" + property + "'";
        errors.addError(error);
    }
}

void CommandValidator::is_int(CommandObject &object, std::string property,
                              Errors &errors)
{
    if (!object.hasProperty(property))
        return;
    auto value = object.getProperty(property);
    try {
        std::stoi(value);
    } catch (std::invalid_argument) {
        std::string error;
        error = "Property `" + property + "` should be an integer";
        errors.addError(error);
    } catch (std::out_of_range) {
        std::string error;
        error = "Property `" + property
                + "` has an integer value which is too high";
        errors.addError(error);
    }
}

void CommandValidator::validate_delete(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto type = object.getType();
    if (type == CommandObject::PATIENT || type == CommandObject::DOCTOR
        || type == CommandObject::NURSE || type == CommandObject::PARAMEDIC
        || type == CommandObject::ASSISTANT) {
        has_property(object, CommandObject::ID, errors);
        is_int(object, CommandObject::ID, errors);
    } else if (type == CommandObject::DEPARTMENT) {
        has_property(object, CommandObject::DEPARTMENT_NAME2, errors);
    } else if (type == CommandObject::ROOM) {
        has_property(object, CommandObject::DEPARTMENT_NAME2, errors);
        has_property(object, CommandObject::ROOM_NO, errors);
        is_int(object, CommandObject::ROOM_NO, errors);
    } else {
        std::string error = "Invalid object type: `" + type + "`";
        errors.addError(error);
    }
}
