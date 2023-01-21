#include "InMemoryDataContainer.h"
#include <stdexcept>

// Create
void InMemoryDataContainer::addPatient(std::string first_name,
                                       std::string last_name)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::addDoctor(std::string first_name,
                                      std::string last_name,
                                      Specialities speciality)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::addNurse(std::string first_name,
                                     std::string last_name)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::addParamedic(std::string first_name,
                                         std::string last_name)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::addAssistant(std::string first_name,
                                         std::string last_name)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::addDepartament(std::string departament_name)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::addRoom(std::string departament_name, int room_no)
{
    throw std::runtime_error("Not implemented yet.");
}
//
// Delete
void InMemoryDataContainer::deletePatient(int id)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::deleteDoctor(int id)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::deleteNurse(int id)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::deleteParamedic(int id)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::deleteAssistant(int id)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::deleteDepartament(std::string departament_name)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::deleteRoom(std::string departament, int room_no)
{
    throw std::runtime_error("Not implemented yet.");
}
//
// Update
void InMemoryDataContainer::modifyPatient(int id, Patient patient)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::modifyDoctor(int id, Doctor doctor)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::modifyNurse(int id, Nurse nurse)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::modifyParamedic(int id, Paramedic paramedic)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::modifyAssistant(int id, Assistant assistant)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::modifyDepartament(int departament_name,
                                              Department departament)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::modifyRoom(int id, Room room)
{
    throw std::runtime_error("Not implemented yet.");
}
//
// Domain operations
void InMemoryDataContainer::performExamination(int doctor_id, int patient_id)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::prescribeMedication(int doctor_id, int patient_id,
                                                std::vector<std::string> meds)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::administerMedicine(int nurse_id, int patient_id,
                                               std::string medicine)
{
    throw std::runtime_error("Not implemented yet.");
}
void InMemoryDataContainer::performSurgery(int doctor_id, int patient_id)
{
    throw std::runtime_error("Not implemented yet.");
}
//
// Read
std::vector<Patient>
InMemoryDataContainer::findPatients(Patient patient_template)
{
    throw std::runtime_error("Not implemented yet.");
}
std::vector<Doctor> InMemoryDataContainer::findDoctors(Doctor doctor_template)
{
    throw std::runtime_error("Not implemented yet.");
}
std::vector<Nurse> InMemoryDataContainer::findNurses(Nurse nurse_template)
{
    throw std::runtime_error("Not implemented yet.");
}
std::vector<Paramedic>
InMemoryDataContainer::findParamedics(Paramedic paramedic_template)
{
    throw std::runtime_error("Not implemented yet.");
}
std::vector<Assistant>
InMemoryDataContainer::findAssistants(Assistant assistant_template)
{
    throw std::runtime_error("Not implemented yet.");
}
std::vector<Department>
InMemoryDataContainer::findDepartments(std::string department_name_template)
{
    throw std::runtime_error("Not implemented yet.");
}
//
