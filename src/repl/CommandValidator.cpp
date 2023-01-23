#include <iostream>
#include <sstream>
#include <stdexcept>

#include "CommandObject.h"
#include "CommandValidator.h"
#include "Command.h"
#include "Errors.h"
#include "Doctor.h"


// TODO: Replace string constants with enumerations.
Errors CommandValidator::validate(Command &command)
{
    Errors errors;

    auto command_type = command.getType();
    if (command_type == Command::ADD_COMMAND) {
        validate_add(command, errors);
    } else if (command_type == Command::DELETE_COMMAND) {
        validate_delete(command, errors);
    } else if (command_type == Command::UPDATE_COMMAND) {
        validate_update(command, errors);
    } else if (command_type == Command::SEARCH_COMMAND) {
        validate_search(command, errors);
    } else if (command_type == Command::EXAMINE_COMMAND) {
        validate_examine(command, errors);
    } else if (command_type == Command::PRESCRIBE_COMMAND) {
        validate_prescribe(command, errors);
    } else if (command_type == Command::ADMINISTER_COMMAND) {
    } else if (command_type == Command::SURGERY_COMMAND) {
    } else if (command_type == Command::HOSPITALIZE_COMMAND) {
    } else if (command_type == Command::ASSIGN_ROOM_COMMAND) {
    } else if (command_type == Command::DISCHARGE_COMMAND) {
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
        is_doctor_speciality(object, CommandObject::SPECIALITY, errors);
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

void CommandValidator::is_doctor_speciality(CommandObject &object,
                                            std::string property,
                                            Errors &errors)
{
    if (!object.hasProperty(property))
        return;
    auto value = object.getProperty(property);
    auto maybe_speciality = Doctor::parseSpeciality(value);
    if (!maybe_speciality.has_value()) {
        std::string error = "Invalid speciality: '" + value + "'";
        errors.addError(error);
        std::string suggestion = "Valid specialities: ";
        suggestion += "[";
        bool first = true;
        for (auto val : Doctor::getSpecialities()) {
            if (!first)
                suggestion += ", ";
            suggestion += val;
            first = false;
        }
        suggestion += "]";
        errors.addError(suggestion);
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
        has_property(object, CommandObject::ROOM_NO, errors);
        is_int(object, CommandObject::ROOM_NO, errors);
    } else {
        std::string error = "Invalid object type: `" + type + "`";
        errors.addError(error);
    }
}

void CommandValidator::has_id(CommandObject &object, Errors &errors)
{
    has_property(object, CommandObject::ID, errors);
    is_int(object, CommandObject::ID, errors);
}

void CommandValidator::has_any(CommandObject &object,
                               std::vector<std::string> properties,
                               Errors &errors)
{
    bool has_one = false;
    for (auto prop : properties) {
        if (object.hasProperty(prop))
            has_one = true;
    }
    if (!has_one) {
        std::string error =
            "Object '" + object.getType()
            + "' should have at least one of the following properties: ";
        bool first = true;
        for (auto prop : properties) {
            if (!first)
                error += ", ";
            error += "'" + prop + "'";
            first = false;
        }
        errors.addError(error);
    }
}

void CommandValidator::validate_update(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto type = object.getType();
    if (type == CommandObject::PATIENT) {
        has_id(object, errors);
        has_any(object, {CommandObject::FIRST_NAME, CommandObject::LAST_NAME},
                errors);
    } else if (type == CommandObject::DOCTOR) {
        has_id(object, errors);
        has_any(object,
                {CommandObject::FIRST_NAME, CommandObject::LAST_NAME,
                 CommandObject::SPECIALITY},
                errors);
        is_doctor_speciality(object, CommandObject::SPECIALITY, errors);
    } else if (type == CommandObject::NURSE) {
        has_id(object, errors);
        has_any(object, {CommandObject::FIRST_NAME, CommandObject::LAST_NAME},
                errors);
    } else if (type == CommandObject::PARAMEDIC) {
        has_id(object, errors);
        has_any(object, {CommandObject::FIRST_NAME, CommandObject::LAST_NAME},
                errors);
    } else if (type == CommandObject::ASSISTANT) {
        has_id(object, errors);
        has_any(object, {CommandObject::FIRST_NAME, CommandObject::LAST_NAME},
                errors);
    } else if (type == CommandObject::DEPARTMENT) {
        has_property(object, CommandObject::DEPARTMENT_NAME2, errors);
        has_property(object, CommandObject::DEPARTMENT_NEW_NAME, errors);
    } else if (type == CommandObject::ROOM) {
        has_property(object, CommandObject::ROOM_NO, errors);
        is_int(object, CommandObject::ROOM_NO, errors);
        has_property(object, CommandObject::ROOM_NEW_NO, errors);
        is_int(object, CommandObject::ROOM_NEW_NO, errors);
    } else {
        std::string error = "Invalid object type: `" + type + "`";
        errors.addError(error);
    }
}

void CommandValidator::validate_search(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto type = object.getType();

    if (type != CommandObject::PATIENT && type != CommandObject::DOCTOR
        && type != CommandObject::NURSE && type != CommandObject::PARAMEDIC
        && type != CommandObject::ASSISTANT && type != CommandObject::DEPARTMENT
        && type != CommandObject::ROOM) {
        std::string error = "Invalid object type: `" + type + "`";
        errors.addError(error);
    }
    if (type == CommandObject::DOCTOR) {
        is_doctor_speciality(object, CommandObject::SPECIALITY, errors);
    }
}

void CommandValidator::validate_examine(Command &command, Errors &errors)
{
    auto doctor = command.getObject(0);
    auto patient = command.getObject(1);

    has_id(doctor, errors);
    has_id(patient, errors);

    auto doctor_type = doctor.getType();
    if (doctor_type != CommandObject::DOCTOR) {
        std::string error;
        error = "Invalid type '" + doctor_type + "'. Should be 'doctor'";
        errors.addError(error);
    }

    auto patient_type = patient.getType();
    if (patient_type != CommandObject::PATIENT) {
        std::string error;
        error = "Invalid type '" + patient_type + "'. Should be 'patient'";
        errors.addError(error);
    }
}

void CommandValidator::validate_prescribe(Command &command, Errors &errors)
{
    auto doctor = command.getObject(0);
    auto patient = command.getObject(1);
    auto meds = command.getArray(0);

    has_id(doctor, errors);
    has_id(patient, errors);

    auto doctor_type = doctor.getType();
    if (doctor_type != CommandObject::DOCTOR) {
        std::string error;
        error = "Invalid type '" + doctor_type + "'. Should be 'doctor'";
        errors.addError(error);
    }

    auto patient_type = patient.getType();
    if (patient_type != CommandObject::PATIENT) {
        std::string error;
        error = "Invalid type '" + patient_type + "'. Should be 'patient'";
        errors.addError(error);
    }
}
