#include "CommandExecutor.h"
#include "Command.h"
#include "CommandObject.h"
#include "DataContainer.h"
#include "Patient.h"
#include "Results.h"
#include "Errors.h"
#include <stdexcept>
#include <string>
#include <utility>


// TODO: implement fully
std::pair<Results, Errors> CommandExecutor::executeCommand(Command &command)
{
    Errors errors;
    Results results;
    auto command_type = command.getType();
    if (command_type == Command::ADD_COMMAND) {
        auto object_type = command.getObject(0).getType();
        if (object_type == CommandObject::PATIENT) {
            addPerson(command, &DataContainer::AddPatient, errors);
        } else if (object_type == CommandObject::DOCTOR) {
            addDoctor(command, errors);
        } else if (object_type == CommandObject::NURSE) {
            addPerson(command, &DataContainer::AddNurse, errors);
        } else if (object_type == CommandObject::PARAMEDIC) {
            addPerson(command, &DataContainer::AddParamedic, errors);
        } else if (object_type == CommandObject::ASSISTANT) {
            addPerson(command, &DataContainer::AddAssistivePersonnel, errors);
        } else if (object_type == CommandObject::DEPARTMENT) {
            addDepartment(command, errors);
        } else if (object_type == CommandObject::ROOM) {
            addRoom(command, errors);
        }
    } else if (command_type == Command::DELETE_COMMAND) {
        auto object_type = command.getObject(0).getType();
        if (object_type == CommandObject::PATIENT) {
            deletePerson(command, &DataContainer::DeletePatient, "Patient",
                         errors);
        } else if (object_type == CommandObject::DOCTOR) {
            deletePerson(command, &DataContainer::DeleteDoctor, "Doctor",
                         errors);
        } else if (object_type == CommandObject::NURSE) {
            deletePerson(command, &DataContainer::DeleteNurse, "Nurse", errors);
        } else if (object_type == CommandObject::PARAMEDIC) {
            deletePerson(command, &DataContainer::DeleteParamedic, "Paramedic",
                         errors);
        } else if (object_type == CommandObject::ASSISTANT) {
            deletePerson(command, &DataContainer::DeleteAssistivePersonnel,
                         "Assistant", errors);
        } else if (object_type == CommandObject::DEPARTMENT) {
            deleteDepartment(command, errors);
        } else if (object_type == CommandObject::ROOM) {
            deleteRoom(command, errors);
        }
    } else if (command_type == Command::UPDATE_COMMAND) {
        auto object_type = command.getObject(0).getType();
        if (object_type == CommandObject::PATIENT) {
            updatePatient(command, errors);
        } else if (object_type == CommandObject::DOCTOR) {
            updateDoctor(command, errors);
        } else if (object_type == CommandObject::NURSE) {
        } else if (object_type == CommandObject::PARAMEDIC) {
        } else if (object_type == CommandObject::ASSISTANT) {
        } else if (object_type == CommandObject::DEPARTMENT) {
        } else if (object_type == CommandObject::ROOM) {
        }
    } else if (command_type == Command::SEARCH_COMMAND) {
        auto object_type = command.getObject(0).getType();
        if (object_type == CommandObject::PATIENT) {
            searchPatient(command, errors, results);
        } else if (object_type == CommandObject::DOCTOR) {
            searchDoctor(command, errors, results);
        } else if (object_type == CommandObject::NURSE) {
            searchNurse(command, errors, results);
        } else if (object_type == CommandObject::PARAMEDIC) {
            searchParamedic(command, errors, results);
        } else if (object_type == CommandObject::ASSISTANT) {
        } else if (object_type == CommandObject::DEPARTMENT) {
            searchDepartment(command, errors, results);
        } else if (object_type == CommandObject::ROOM) {
        }
    } else {
        std::string error = "Unknown command type: '" + command_type + "'";
        errors.addError(error);
    }

    return {results, errors};
}

void CommandExecutor::addPerson(Command &command,
                                void (DataContainer::*f)(std::string first_name,
                                                         std::string last_name),
                                Errors &errors)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    (data_container.*f)(first_name, last_name);
}

void CommandExecutor::addDoctor(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto first_name = object.getProperty(CommandObject::FIRST_NAME);
    auto last_name = object.getProperty(CommandObject::LAST_NAME);
    auto speciality =
        Doctor::parseSpeciality(object.getProperty(CommandObject::SPECIALITY))
            .value();
    data_container.AddDoctor(first_name, last_name, speciality);
}

void CommandExecutor::addDepartment(Command &command, Errors &errors)
{
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
}

void CommandExecutor::addRoom(Command &command, Errors &errors)
{
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
}

void CommandExecutor::deletePerson(Command &command,
                                   void (DataContainer::*f)(int),
                                   std::string object_type, Errors &errors)
{
    auto object = command.getObject(0);
    auto id = object.getProperty(CommandObject::ID);
    try {
        (data_container.*f)(std::stoi(id));
    } catch (std::out_of_range &e) {
        std::string error =
            object_type + " with id '" + id + "' does not exist";
        errors.addError(error);
    }
}

void CommandExecutor::deleteDepartment(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto department = object.getProperty(CommandObject::DEPARTMENT_NAME2);
    try {
        data_container.DeleteDepartament(department);
    } catch (std::out_of_range &e) {
        std::string error = "Department '" + department + "' does not exist";
        errors.addError(error);
    }
}

void CommandExecutor::deleteRoom(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto room_no = object.getProperty(CommandObject::ROOM_NO);
    try {
        data_container.DeleteRoom(std::stoi(room_no));
    } catch (std::out_of_range &e) {
        std::string error = "Room '" + room_no + "' does not exist";
        errors.addError(error);
    }
}

void CommandExecutor::updatePatient(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto id = object.getProperty(CommandObject::ID);
    auto maybe_patient = data_container.GetPatient(std::stoi(id));
    if (!maybe_patient.has_value()) {
        std::string error = "Patient with id '" + id + "' does not exist";
        errors.addError(error);
        return;
    }

    auto patient = maybe_patient.value();
    if (object.hasProperty(CommandObject::FIRST_NAME))
        patient.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        patient.setLastName(object.getProperty(CommandObject::LAST_NAME));

    data_container.ModifyPatient(std::stoi(id), patient);
}

void CommandExecutor::updateDoctor(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto id = object.getProperty(CommandObject::ID);
    auto maybe_doctor = data_container.GetDoctor(std::stoi(id));
    if (!maybe_doctor.has_value()) {
        std::string error = "Doctor with id '" + id + "' does not exist";
        errors.addError(error);
        return;
    }

    auto doctor = maybe_doctor.value();
    if (object.hasProperty(CommandObject::FIRST_NAME))
        doctor.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        doctor.setLastName(object.getProperty(CommandObject::LAST_NAME));
    if (object.hasProperty(CommandObject::SPECIALITY))
        doctor.setSpeciality(Doctor::parseSpeciality(
                                 object.getProperty(CommandObject::SPECIALITY))
                                 .value());

    data_container.ModifyDoctor(std::stoi(id), doctor);
}

void CommandExecutor::searchPatient(Command &command, Errors &errors,
                                    Results &results)
{
    auto object = command.getObject(0);
    Patient patient;
    if (object.hasProperty(CommandObject::FIRST_NAME))
        patient.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        patient.setLastName(object.getProperty(CommandObject::LAST_NAME));

    auto result = data_container.findPatients(patient);
    if (result.size() != 0)
        results.addResult(result);
}

void CommandExecutor::searchDoctor(Command &command, Errors &errors,
                                   Results &results)
{
    auto object = command.getObject(0);
    Doctor doctor;
    if (object.hasProperty(CommandObject::FIRST_NAME))
        doctor.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        doctor.setLastName(object.getProperty(CommandObject::LAST_NAME));
    if (object.hasProperty(CommandObject::SPECIALITY))
        doctor.setSpeciality(Doctor::parseSpeciality(
                                 object.getProperty(CommandObject::SPECIALITY))
                                 .value());

    auto result = data_container.findDoctors(doctor);
    if (result.size() != 0)
        results.addResult(result);
}

void CommandExecutor::searchDepartment(Command &command, Errors &errors,
                                       Results &results)
{
    auto object = command.getObject(0);
    std::string department;
    if (object.hasProperty(CommandObject::DEPARTMENT_NAME))
        department = object.getProperty(CommandObject::DEPARTMENT_NAME);

    auto result = data_container.findDepartments(department);
    if (result.size() != 0)
        results.addResult(result);
}

void CommandExecutor::searchNurse(Command &command, Errors &errors,
                                  Results &results)
{
    auto object = command.getObject(0);
    Nurse nurse;
    if (object.hasProperty(CommandObject::FIRST_NAME))
        nurse.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        nurse.setLastName(object.getProperty(CommandObject::LAST_NAME));

    auto result = data_container.findNurses(nurse);
    if (result.size() != 0)
        results.addResult(result);
}

void CommandExecutor::searchParamedic(Command &command, Errors &errors,
                                      Results &results)
{
    auto object = command.getObject(0);
    Paramedic paramedic;
    if (object.hasProperty(CommandObject::FIRST_NAME))
        paramedic.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        paramedic.setLastName(object.getProperty(CommandObject::LAST_NAME));

    auto result = data_container.findParamedics(paramedic);
    if (result.size() != 0)
        results.addResult(result);
}
