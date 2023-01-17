#pragma once

#include "Assistant.h"
#include "Department.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Paramedic.h"
#include "Patient.h"
#include "Room.h"

class DataContainer
{
  public:
    // Create
    virtual void addPatient(std::string first_name, std::string last_name) = 0;
    virtual void addDoctor(std::string first_name, std::string last_name, Specialities speciality) = 0;
    virtual void addNurse(std::string first_name, std::string last_name) = 0;
    virtual void addParamedic(std::string first_name, std::string last_name) = 0;
    virtual void addAssistant(std::string first_name, std::string last_name) = 0;
    virtual void addDepartament(std::string departament_name) = 0;
    virtual void addRoom(std::string departament_name, int room_no) = 0;
    //
    // Delete
    virtual void deletePatient(int id) = 0;
    virtual void deleteDoctor(int id) = 0;
    virtual void deleteNurse(int id) = 0;
    virtual void deleteParamedic(int id) = 0;
    virtual void deleteAssistant(int id) = 0;
    virtual void deleteDepartament(std::string departament_name) = 0;
    virtual void deleteRoom(std::string departament, int room_no) = 0;
    //
    // Modify
    virtual void modifyPatient(int id, Patient patient) = 0;
    virtual void modifyDoctor(int id, Doctor doctor) = 0;
    virtual void modifyNurse(int id, Nurse nurse) = 0;
    virtual void modifyParamedic(int id, Paramedic paramedic) = 0;
    virtual void modifyAssistant(int id, Assistant assistant) = 0;
    virtual void modifyDepartament(int departament_name, Department departament) = 0;
    virtual void modifyRoom(int id, Room room) = 0;
    //
    // Domain operations
    virtual void performExamination(int doctor_id, int patient_id) = 0;
    virtual void prescribeMedication(int doctor_id, int patient_id, std::vector<std::string> meds) = 0;
    virtual void administerMedicine(int nurse_id, int patient_id, std::string medicine) = 0;
    virtual void performSurgery(int doctor_id, int patient_id) = 0;
    //
    // Read
    virtual std::vector<Patient> findPatients(Patient patient_template) = 0;
    virtual std::vector<Doctor> findDoctors(Doctor doctor_template) = 0;
    virtual std::vector<Nurse> findNurses(Nurse nurse_template) = 0;
    virtual std::vector<Paramedic> findParamedics(Paramedic paramedic_template) = 0;
    virtual std::vector<Assistant> findAssistants(Assistant assistant_template) = 0;
    virtual std::vector<Department> findDepartments(std::string department_name_template) = 0;
    //
};
