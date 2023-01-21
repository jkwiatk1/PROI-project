#pragma once

#include "DataContainer.h"

class InMemoryDataContainer : public DataContainer {
  public:
    // Create
     void addPatient(std::string first_name, std::string last_name) override;
     void addDoctor(std::string first_name, std::string last_name, Specialities speciality) override;
     void addNurse(std::string first_name, std::string last_name) override;
     void addParamedic(std::string first_name, std::string last_name) override;
     void addAssistant(std::string first_name, std::string last_name) override;
     void addDepartament(std::string departament_name) override;
     void addRoom(std::string departament_name, int room_no) override;
    //
    // Delete
     void deletePatient(int id) override;
     void deleteDoctor(int id) override;
     void deleteNurse(int id) override;
     void deleteParamedic(int id) override;
     void deleteAssistant(int id) override;
     void deleteDepartament(std::string departament_name) override;
     void deleteRoom(std::string departament, int room_no) override;
    //
    // Modify
     void modifyPatient(int id, Patient patient) override;
     void modifyDoctor(int id, Doctor doctor) override;
     void modifyNurse(int id, Nurse nurse) override;
     void modifyParamedic(int id, Paramedic paramedic) override;
     void modifyAssistant(int id, Assistant assistant) override;
     void modifyDepartament(int departament_name, Department departament) override;
     void modifyRoom(int id, Room room) override;
    //
    // Domain operations
     void performExamination(int doctor_id, int patient_id) override;
     void prescribeMedication(int doctor_id, int patient_id, std::vector<std::string> meds) override;
     void administerMedicine(int nurse_id, int patient_id, std::string medicine) override;
     void performSurgery(int doctor_id, int patient_id) override;
    //
    // Read
     std::vector<Patient> findPatients(Patient patient_template) override;
     std::vector<Doctor> findDoctors(Doctor doctor_template) override;
     std::vector<Nurse> findNurses(Nurse nurse_template) override;
     std::vector<Paramedic> findParamedics(Paramedic paramedic_template) override;
     std::vector<Assistant> findAssistants(Assistant assistant_template) override;
     std::vector<Department> findDepartments(std::string department_name_template) override;
    //
};
