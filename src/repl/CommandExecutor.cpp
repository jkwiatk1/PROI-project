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
            updateNurse(command, errors);
        } else if (object_type == CommandObject::PARAMEDIC) {
            updateParamedic(command, errors);
        } else if (object_type == CommandObject::ASSISTANT) {
            updateAssistant(command, errors);
        } else if (object_type == CommandObject::DEPARTMENT) {
            updateDepartment(command, errors);
        } else if (object_type == CommandObject::ROOM) {
            updateRoom(command, errors);
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
            searchAssistant(command, errors, results);
        } else if (object_type == CommandObject::DEPARTMENT) {
            searchDepartment(command, errors, results);
        } else if (object_type == CommandObject::ROOM) {
            std::string error = "You can't search for rooms!";
            errors.addError(error);
        }
    } else if (command_type == Command::EXAMINE_COMMAND) {
        examine(command, errors);
    } else if (command_type == Command::PRESCRIBE_COMMAND) {
        prescribe(command, errors);
    } else if (command_type == Command::ADMINISTER_COMMAND) {
        administer(command, errors);
    } else if (command_type == Command::SURGERY_COMMAND) {
        surgery(command, errors);
    } else if (command_type == Command::HOSPITALIZE_COMMAND) {
        hospitalize(command, errors);
    } else if (command_type == Command::ASSIGN_ROOM_COMMAND) {
        assign_room(command, errors);
    } else if (command_type == Command::DISCHARGE_COMMAND) {
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

void CommandExecutor::updateNurse(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto id = object.getProperty(CommandObject::ID);
    auto maybe_nurse = data_container.GetNurse(std::stoi(id));
    if (!maybe_nurse.has_value()) {
        std::string error = "Nurse with id '" + id + "' does not exist";
        errors.addError(error);
        return;
    }

    auto nurse = maybe_nurse.value();
    if (object.hasProperty(CommandObject::FIRST_NAME))
        nurse.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        nurse.setLastName(object.getProperty(CommandObject::LAST_NAME));

    data_container.ModifyNurse(std::stoi(id), nurse);
}

void CommandExecutor::updateParamedic(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto id = object.getProperty(CommandObject::ID);
    auto maybe_paramedic = data_container.GetParamedic(std::stoi(id));
    if (!maybe_paramedic.has_value()) {
        std::string error = "Nurse with id '" + id + "' does not exist";
        errors.addError(error);
        return;
    }

    auto paramedic = maybe_paramedic.value();
    if (object.hasProperty(CommandObject::FIRST_NAME))
        paramedic.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        paramedic.setLastName(object.getProperty(CommandObject::LAST_NAME));

    data_container.ModifyParamedic(std::stoi(id), paramedic);
}

void CommandExecutor::updateAssistant(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto id = object.getProperty(CommandObject::ID);
    auto maybe_assistant = data_container.GetAssistant(std::stoi(id));
    if (!maybe_assistant.has_value()) {
        std::string error = "Nurse with id '" + id + "' does not exist";
        errors.addError(error);
        return;
    }

    auto assistant = maybe_assistant.value();
    if (object.hasProperty(CommandObject::FIRST_NAME))
        assistant.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        assistant.setLastName(object.getProperty(CommandObject::LAST_NAME));

    data_container.ModifyAssistivePersonnel(std::stoi(id), assistant);
}

void CommandExecutor::updateDepartment(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto old_name = object.getProperty(CommandObject::DEPARTMENT_NAME2);
    auto new_name = object.getProperty(CommandObject::DEPARTMENT_NEW_NAME);
    auto maybe_department = data_container.GetDepartment(old_name);
    if (!maybe_department.has_value()) {
        std::string error = "Department '" + old_name + "' does not exist";
        errors.addError(error);
        return;
    }
    auto department = maybe_department.value();
    department.setName(new_name);
    data_container.ModifyDepartament(old_name, department);
}

void CommandExecutor::updateRoom(Command &command, Errors &errors)
{
    auto object = command.getObject(0);
    auto old_no = object.getProperty(CommandObject::DEPARTMENT_NAME2);
    auto new_no = object.getProperty(CommandObject::DEPARTMENT_NEW_NAME);
    auto maybe_room = data_container.GetRoom(std::stoi(old_no));
    if (!maybe_room.has_value()) {
        std::string error = "Department '" + old_no + "' does not exist";
        errors.addError(error);
        return;
    }
    auto room = maybe_room.value();
    room.setNr(std::stoi(new_no));
    data_container.ModifyRoom(std::stoi(old_no), room);
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
    if (object.hasProperty(CommandObject::SHOW_CARD))
        results.setShowPatientInfo(true);

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
    if (object.hasProperty(CommandObject::INFO))
        results.setShowDepartmentInfo(true);

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

void CommandExecutor::searchAssistant(Command &command, Errors &errors,
                                      Results &results)
{
    auto object = command.getObject(0);
    Assistant assistant;
    if (object.hasProperty(CommandObject::FIRST_NAME))
        assistant.setFirstName(object.getProperty(CommandObject::FIRST_NAME));
    if (object.hasProperty(CommandObject::LAST_NAME))
        assistant.setLastName(object.getProperty(CommandObject::LAST_NAME));

    auto result = data_container.findAssistants(assistant);
    if (result.size() != 0)
        results.addResult(result);
}

void CommandExecutor::examine(Command &command, Errors &errors)
{
    auto doctor_id = std::stoi(command.getObject(0).getProperty(CommandObject::ID));
    auto patient_id = std::stoi(command.getObject(1).getProperty(CommandObject::ID));
    try {
        data_container.PerformExamination(doctor_id, patient_id);
    } catch (std::out_of_range &x) {
        errors.addError("Patient or doctor with the specified id does not exist");
    }
}

void CommandExecutor::prescribe(Command &command, Errors &errors)
{
    auto doctor_id = std::stoi(command.getObject(0).getProperty(CommandObject::ID));
    auto patient_id = std::stoi(command.getObject(1).getProperty(CommandObject::ID));
    auto meds = command.getArray(0);
    try {
        data_container.PrescribeMedication(doctor_id, patient_id, meds);
    } catch (std::out_of_range &x) {
        errors.addError("Patient or doctor with the specified id does not exist");
    }
}

void CommandExecutor::administer(Command &command, Errors &errors)
{
    auto doctor_id = std::stoi(command.getObject(0).getProperty(CommandObject::ID));
    auto patient_id = std::stoi(command.getObject(1).getProperty(CommandObject::ID));
    auto keyvals = command.getKeyvals();
    auto med = keyvals[Command::MEDICINE];
    try {
        data_container.AdministerMedicine(doctor_id, patient_id, med);
    } catch (std::out_of_range &x) {
        errors.addError("Patient or nurse with the specified id does not exist");
    }
}

void CommandExecutor::surgery(Command &command, Errors &errors)
{
    auto doctor_id = std::stoi(command.getObject(0).getProperty(CommandObject::ID));
    auto patient_id = std::stoi(command.getObject(1).getProperty(CommandObject::ID));
    try {
        data_container.PerformSurgery(doctor_id, patient_id);
    } catch (std::out_of_range &x) {
        errors.addError("Patient or doctor with the specified id does not exist");
    }
}

void CommandExecutor::hospitalize(Command &command, Errors &errors)
{
    auto assistant_id = std::stoi(command.getObject(0).getProperty(CommandObject::ID));
    auto patient_id = std::stoi(command.getObject(1).getProperty(CommandObject::ID));
    try {
        data_container.Hospitalize(patient_id, assistant_id);
    } catch (std::out_of_range &x) {
        errors.addError("Assistant or patient with the specified id does not exist");
    }
}

void CommandExecutor::assign_room(Command &command, Errors &errors)
{
    auto assistant_id = std::stoi(command.getObject(0).getProperty(CommandObject::ID));
    auto patient_id = std::stoi(command.getObject(1).getProperty(CommandObject::ID));
    auto room_no = std::stoi(command.getKeyvals()[Command::ROOM_NO]);
    try {
        data_container.AssignRoom(assistant_id, patient_id, room_no);
    } catch (std::out_of_range &x) {
        errors.addError("Assistant, patient or room with the specified id does not exist");
    }
}
