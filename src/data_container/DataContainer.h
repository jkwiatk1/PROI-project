#pragma once

#include <string>

#include "Doctor.h"
#include "Person.h"
#include "Patient.h"
#include "Department.h"
#include "Nurse.h"
#include "Paramedic.h"
#include "Assistant.h"

class DataContainer
{
  public:
    virtual void AddPatient(std::string first_name, std::string last_name) = 0;
    virtual void AddDoctor(std::string first_name, std::string last_name, Specialities speciality) = 0;
    virtual void AddNurse(std::string first_name, std::string last_name) = 0;
    virtual void AddParamedic(std::string first_name, std::string last_name) = 0;
    virtual void AddAssistivePersonnel(std::string first_name, std::string last_name) = 0;
    virtual void AddDepartament(std::string departament_name) = 0;
    virtual void AddRoom(std::string departament_name, int room_no) = 0;

    virtual void DeletePatient(int id) = 0;
    virtual void DeleteDoctor(int id) = 0;
    virtual void DeleteNurse(int id) = 0;
    virtual void DeleteParamedic(int id) = 0;
    virtual void DeleteAssistivePersonnel(int id) = 0;
    virtual void DeleteDepartament(std::string departament_name) = 0;
    virtual void DeleteRoom(int room_no) = 0;

    virtual void ModifyPatient(int id, Patient) = 0;
    virtual void ModifyDoctor(int id, Doctor) = 0;
    virtual void ModifyNurse(int id, Nurse) = 0;
    virtual void ModifyParamedic(int id, Paramedic) = 0;
    virtual void ModifyAssistivePersonnel(int id, Assistant) = 0;
    virtual void ModifyDepartament(std::string departament_name, Department) = 0;
    virtual void ModifyRoom(int room_no, Room) = 0;

    virtual void PerformExamination(int doctor_id, int patient_id) = 0;
    virtual void PrescribeMedication(int doctor_id, int patient_id, std::vector<std::string> medicines) = 0;
    virtual void AdministerMedicine(int nurse_id, int patient_id, std::string medicine) = 0;
    virtual void PerformSurgery(int doctor_id, int patient_id) = 0;

    virtual std::vector<Patient *> findPatients(Patient patient_template) = 0;
    virtual std::vector<Doctor *> findDoctors(Doctor doctor_template) = 0;
    virtual std::vector<Nurse *> findNurses(Nurse nurse_template) = 0;
    virtual std::vector<Paramedic *> findParamedics(Paramedic paramedic_template) = 0;
    virtual std::vector<Assistant *> findAssistants(Assistant assistant_template) = 0;
    virtual std::vector<Department *> findDepartments(std::string department_name_template) = 0;
};

