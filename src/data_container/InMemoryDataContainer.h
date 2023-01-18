#pragma once

#include "DataContainer.h"
#include "TestPerson.h"
#include "../domain/Doctor.h"
#include "../domain/Department.h"
#include "../domain/Nurse.h"
#include "../domain/Paramedic.h"
#include "../domain/Assistant.h"
#include <map>
#include <string>

class InMemoryDataContainer : public DataContainer {
private:
    std::map<int, Patient*> Patients_DC;
    std::map<int, Doctor*> Doctors_DC;
    std::map<int, Nurse*> NursesDC;
    std::map<int, Paramedic*> ParamedicsDC;
    std::map<int, Assistant*> AssistantsDC;

    InMemoryDataContainer() {}; 
    InMemoryDataContainer(const InMemoryDataContainer&) = delete;
    InMemoryDataContainer& operator=(const InMemoryDataContainer&) = delete;    
public:
    static InMemoryDataContainer& getInstance() {    
        static InMemoryDataContainer s_instance; 
        return s_instance;
    };

    void AddPatient(std::string first_name, std::string last_name) override;
    void AddDoctor(std::string first_name, std::string last_name, Specialities speciality) override;
    void AddNurse(std::string first_name, std::string last_name) override;
    void AddParamedic(std::string first_name, std::string last_name) override;
    void AddAssistivePersonnel(std::string first_name, std::string last_name) override;
    void AddDepartament(std::string ID, std::string departament_name) override;
    void AddRoom(std::string departament_name, int room_no) override;

    void DeletePatient(int id) override;
    void DeleteDoctor(int id) override;
    void DeleteNurse(int id) override;
    void DeleteParamedic(int id) override;
    void DeleteAssistivePersonnel(int id) override;
    void DeleteDepartament(std::string departament_name) override;
    void DeleteRoom(int room_no) override; 

    void ModifyPatient(int id, Patient) override; 
    void ModifyDoctor(int id, Doctor) override; 
    void ModifyNurse(int id, Nurse) override; 
    void ModifyParamedic(int id, Paramedic) override; 
    void ModifyAssistivePersonnel(int id, Assistant) override; 
    void ModifyDepartament(std::string departament_name, Department) override; 
    void ModifyRoom(int room_no, Room) override; 

    void PerformExamination(int doctor_id, int patient_id) override;
    void PrescribeMedication(int doctor_id, int patient_id, std::string medicine[]) override;
    void AdministerMedicine(int nurse_id, int patient_id, std::string medicine) override;
    void PerformSurgery(int doctor_id, int patient_id) override;

    Patient FindPatients(Patient) override;
    Doctor FindDoctors(Doctor) override;
    Nurse FindNurses(Nurse) override;
    Paramedic FindParamedics(Paramedic) override;
    Assistant FindAssistivePersonnel(Assistant) override;
   // Department FindDepartament(std::string departament_name) override;

};



