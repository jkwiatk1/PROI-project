#include "CommandExecutor.h"
#include "CommandObject.h"
#include "Errors.h"
#include <string>


// TODO: implement fully
Errors CommandExecutor::executeCommand(Command &command)
{
    if (command.getType() == Command::ADD_COMMAND) {
        auto object_type = command.getObject(0).getType();
        if (object_type == CommandObject::PATIENT) {
            addPatient(command);
        } else if (object_type == CommandObject::DOCTOR) {
            addDoctor(command);
        } else if (object_type == CommandObject::NURSE) {
            addDoctor(command);
        } else if (object_type == CommandObject::PARAMEDIC) {
            addParamedic(command);
        } else if (object_type == CommandObject::ASSISTANT) {
            addAssistant(command);
        } else if (object_type == CommandObject::DEPARTMENT) {
            return addDepartment(command);
        } else if (object_type == CommandObject::ROOM) {
            return addRoom(command);
        }
        return Errors();
    }
    return Errors();
}

void CommandExecutor::addPatient(Command &command)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    data_container.AddPatient(first_name, last_name);
}

void CommandExecutor::addDoctor(Command &command)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    auto speciality = object.getProperty(CommandObject::SPECIALITY);
    data_container.AddDoctor(first_name, last_name, speciality);
}

void CommandExecutor::addNurse(Command &command)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    data_container.AddNurse(first_name, last_name);
}

void CommandExecutor::addParamedic(Command &command)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    data_container.AddParamedic(first_name, last_name);
}

void CommandExecutor::addAssistant(Command &command)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    data_container.AddAssistivePersonnel(first_name, last_name);
}

Errors CommandExecutor::addDepartment(Command &command)
{
    Errors errors;
    auto object = command.getObject(0);
    auto department_name = object.getProperty(CommandObject::DEPARTMENT_NAME);
    try {
        data_container.AddDepartament(department_name);
    } catch (...) {
        // TODO: make this catch clause catch a specific exception.
        std::string error;
        error = "Department with name '" + department_name + "' already exists";
        errors.addError(error);
    }
    return errors;
}

Errors CommandExecutor::addRoom(Command &command)
{
    Errors errors;
    auto object = command.getObject(0);
    auto department_name = object.getProperty(CommandObject::DEPARTMENT_NAME2);
    auto room_no = std::stoi(object.getProperty(CommandObject::ROOM_NO));
    auto capacity = std::stoi(object.getProperty(CommandObject::CAPACITY));
    try {
        data_container.AddRoom(department_name, room_no, capacity);
    } catch (std::out_of_range &e) {
        std::string error;
        error = "Department '" + department_name + "' does not exist";
        errors.addError(error);
    }
    return errors;
}
