#include "CommandExecutor.h"
#include "CommandObject.h"


// TODO: implement fully
void CommandExecutor::executeCommand(Command &command)
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
            addDepartment(command);
        } else if (object_type == CommandObject::ROOM) {
            addRoom(command);
        }
    }
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

void CommandExecutor::addDepartment(Command &command)
{
    auto object = command.getObject(0);
    auto department_name = object.getProperty(CommandObject::DEPARTMENT_NAME);
    data_container.AddDepartament(department_name);
}

void CommandExecutor::addRoom(Command &command)
{
    auto object = command.getObject(0);
    auto department_name = object.getProperty(CommandObject::DEPARTMENT_NAME2);
    // TODO: make CommandValidator check if ROOM_NO is an int.
    auto room_no = std::stoi(object.getProperty(CommandObject::ROOM_NO));
    // TODO: change the command grammar to include capacity
    data_container.AddRoom(department_name, room_no, 6);
}
