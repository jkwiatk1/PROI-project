#include "InMemoryDataContainer.h"


// InMemoryDataContainer& InMemoryDataContainer::getInstance(){
//     static InMemoryDataContainer s_instance;
//     return s_instance;
// }

//InMemoryDataContainer::InMemoryDataContainer() {
  // constructor implementation
//}

void InMemoryDataContainer::AddPatient(std::string first_name, std::string last_name)
{
}

void InMemoryDataContainer::AddDoctor(std::string first_name, std::string last_name, Specialities speciality)
{
}

void InMemoryDataContainer::AddNurse(std::string first_name, std::string last_name)
{
}

void InMemoryDataContainer::AddParamedic(std::string first_name, std::string last_name)
{
}

void InMemoryDataContainer::AddAssistivePersonnel(std::string first_name, std::string last_name)
{
}

void InMemoryDataContainer::AddDepartament(std::string ID, std::string departament_name)
{
}

void InMemoryDataContainer::AddRoom(std::string departament_name, int room_no)
{
}



void InMemoryDataContainer::DeletePatient(int id)
{
}

void InMemoryDataContainer::DeleteDoctor(int id)
{
}

void InMemoryDataContainer::DeleteNurse(int id)
{
}

void InMemoryDataContainer::DeleteParamedic(int id)
{
}

void InMemoryDataContainer::DeleteAssistivePersonnel(int id)
{
}

void InMemoryDataContainer::DeleteDepartament(std::string departament_name)
{
}

void InMemoryDataContainer::DeleteRoom(int room_no)
{
}



void InMemoryDataContainer::ModifyPatient(int id, Patient)
{
}

void InMemoryDataContainer::ModifyDoctor(int id, Doctor)
{
}

void InMemoryDataContainer::ModifyNurse(int id, Nurse)
{
}

void InMemoryDataContainer::ModifyParamedic(int id, Paramedic)
{
}

void InMemoryDataContainer::ModifyAssistivePersonnel(int id, Assistant)
{
}

void InMemoryDataContainer::ModifyDepartament(std::string departament_name, Department)
{
}

void InMemoryDataContainer::ModifyRoom(int room_no, Room)
{
}



void InMemoryDataContainer::PerformExamination(int doctor_id, int patient_id)
{
}

void InMemoryDataContainer::PrescribeMedication(int doctor_id, int patient_id, std::string medicine[])
{
}

void InMemoryDataContainer::AdministerMedicine(int nurse_id, int patient_id, std::string medicine)
{
}

void InMemoryDataContainer::PerformSurgery(int doctor_id, int patient_id)
{
}



Patient InMemoryDataContainer::FindPatients(Patient patient)
{
    return patient;
}

Doctor InMemoryDataContainer::FindDoctors(Doctor doctor)
{
    return doctor;
}

Nurse InMemoryDataContainer::FindNurses(Nurse nurse)
{
    return nurse;
}

Paramedic InMemoryDataContainer::FindParamedics(Paramedic paramedic)
{
    return paramedic;
}

Assistant InMemoryDataContainer::FindAssistivePersonnel(Assistant assistant)
{
    return assistant;
}

// Department InMemoryDataContainer::FindDepartament(std::string departament_name)
// {
//     return;
// }
