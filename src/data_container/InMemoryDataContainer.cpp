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

void InMemoryDataContainer::AddDepartament(std::string departament_name)
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

void InMemoryDataContainer::ModifyDepartament(int departament_name, Department)
{
}

void InMemoryDataContainer::ModifyRoom(int room_no, Room)
{
}



void InMemoryDataContainer::PerformExamination(int doctor_id, int patient_id)
{
}

void InMemoryDataContainer::PrescribeMedication(int doctor_id, int patient_id, std::vector<std::string> medicines)
{
}

void InMemoryDataContainer::AdministerMedicine(int nurse_id, int patient_id, std::string medicine)
{
}

void InMemoryDataContainer::PerformSurgery(int doctor_id, int patient_id)
{
}



std::vector<Patient> InMemoryDataContainer::findPatients(Patient patient_template)
{
}

std::vector<Doctor> InMemoryDataContainer::findDoctors(Doctor doctor_template)
{
}

std::vector<Nurse> InMemoryDataContainer::findNurses(Nurse nurse_template)
{
}

std::vector<Paramedic> InMemoryDataContainer::findParamedics(Paramedic paramedic_template)
{
}

std::vector<Assistant> InMemoryDataContainer::findAssistants(Assistant assistant_template)
{
}

std::vector<Department> InMemoryDataContainer::findDepartments(std::string department_name_template)
{
}
