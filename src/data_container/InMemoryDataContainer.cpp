#include "InMemoryDataContainer.h"

void InMemoryDataContainer::AddPatient(std::string first_name, std::string last_name)
{
    Patient *patient = new Patient(first_name, last_name);
    Patients_DC.insert({patient->getID(), patient});
}

void InMemoryDataContainer::AddDoctor(std::string first_name, std::string last_name, Specialities speciality)
{
    Doctor *doctor = new Doctor(first_name, last_name, speciality);
    Doctors_DC.insert({doctor->getID(), doctor});
}

void InMemoryDataContainer::AddNurse(std::string first_name, std::string last_name)
{
    Nurse *nurse = new Nurse(first_name, last_name);
    Nurses_DC.insert({nurse->getID(), nurse});
}

void InMemoryDataContainer::AddParamedic(std::string first_name, std::string last_name)
{
    Paramedic *paramedic = new Paramedic(first_name, last_name);
    Paramedics_DC.insert({paramedic->getID(), paramedic});
}

void InMemoryDataContainer::AddAssistivePersonnel(std::string first_name, std::string last_name)
{
    Assistant *assistant = new Assistant(first_name, last_name);
    Assistants_DC.insert({assistant->getID(), assistant});
}

void InMemoryDataContainer::AddDepartament(std::string departament_name)
{

}

void InMemoryDataContainer::AddRoom(std::string departament_name, int room_no)
{
}



void InMemoryDataContainer::DeletePatient(int id)
{
    Patients_DC.erase(id);
}

void InMemoryDataContainer::DeleteDoctor(int id)
{
    Doctors_DC.erase(id);
}

void InMemoryDataContainer::DeleteNurse(int id)
{
    Nurses_DC.erase(id);
}

void InMemoryDataContainer::DeleteParamedic(int id)
{
    Paramedics_DC.erase(id);
}

void InMemoryDataContainer::DeleteAssistivePersonnel(int id)
{
    Assistants_DC.erase(id);
}

void InMemoryDataContainer::DeleteDepartament(std::string departament_name)
{

}

void InMemoryDataContainer::DeleteRoom(int room_no)
{
}



void InMemoryDataContainer::ModifyPatient(int id, Patient modified_patient)
{
    if(Patients_DC.count(id)>0)
        *Patients_DC[id] = modified_patient;
    else
        throw std::runtime_error("ID not found in the map\n.");
}

void InMemoryDataContainer::ModifyDoctor(int id, Doctor modified_doctor)
{
    if(Doctors_DC.count(id)>0)
        *Doctors_DC[id] = modified_doctor;
    else
        throw std::runtime_error("ID not found in the map\n.");
}

void InMemoryDataContainer::ModifyNurse(int id, Nurse modified_nurse)
{
    if(Nurses_DC.count(id)>0)
        *Nurses_DC[id] = modified_nurse;
    else
        throw std::runtime_error("ID not found in the map\n.");
}

void InMemoryDataContainer::ModifyParamedic(int id, Paramedic modified_paramedic)
{
    if(Paramedics_DC.count(id)>0)
        *Paramedics_DC[id] = modified_paramedic;
    else
        throw std::runtime_error("ID not found in the map\n.");
}

void InMemoryDataContainer::ModifyAssistivePersonnel(int id, Assistant modified_assistant)
{
    if(Assistants_DC.count(id)>0)
        *Assistants_DC[id] = modified_assistant;
    else
        throw std::runtime_error("ID not found in the map\n.");
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



std::vector<Patient *> InMemoryDataContainer::findPatients(Patient patient_template)
{
    return FindInContainer<Patient>(patient_template, Patients_DC);  
}

std::vector<Doctor *> InMemoryDataContainer::findDoctors(Doctor doctor_template)
{
    return FindInContainer<Doctor>(doctor_template, Doctors_DC);      
}

std::vector<Nurse *> InMemoryDataContainer::findNurses(Nurse nurse_template)
{
    return FindInContainer<Nurse>(nurse_template,Nurses_DC);
}

std::vector<Paramedic *> InMemoryDataContainer::findParamedics(Paramedic paramedic_template)
{
    return FindInContainer<Paramedic>(paramedic_template,Paramedics_DC);
}

std::vector<Assistant *> InMemoryDataContainer::findAssistants(Assistant assistant_template)
{
    return FindInContainer<Assistant>(assistant_template, Assistants_DC);
}

std::vector<Department *> InMemoryDataContainer::findDepartments(std::string department_name_template)
{
}


template <class Object>
std::vector<Object *> InMemoryDataContainer::FindInContainer(Object object_template, const std::map<int, Object*>&  dataBase)
{
    std::vector<Object *> founds;
    std::string template_name = object_template.getName().first;
    std::string template_lastName = object_template.getName().second;

    for(const auto& [key, value] : dataBase) {
        if(value->getName().first.find(template_name) == 0 && value->getName().second.find(template_lastName) == 0)
            founds.push_back(value);
    }   

    return founds;    
}