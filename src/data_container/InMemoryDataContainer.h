#pragma once

#include "DataContainer.h"
#include "Doctor.h"
#include "Department.h"
#include "Nurse.h"
#include "Paramedic.h"
#include "Assistant.h"
#include <map>
#include <string>
#include <stdexcept>

class InMemoryDataContainer : public DataContainer {
private:
    std::map<int, Patient*> Patients_DC;
    std::map<int, Patient*> HospitalizedPatients_DC;
    std::map<int, Doctor*> Doctors_DC;
    std::map<int, Nurse*> Nurses_DC;
    std::map<int, Paramedic*> Paramedics_DC;
    std::map<int, Assistant*> Assistants_DC;
    std::map<std::string, Department*> Department_DC;

    InMemoryDataContainer() {};
    InMemoryDataContainer(const InMemoryDataContainer&) = delete;
    InMemoryDataContainer& operator=(const InMemoryDataContainer&) = delete;

    template<class Object>
    std::vector<Object *> FindInContainer(Object object_template, const std::map<int, Object *>&  dataBase);
public:
    static InMemoryDataContainer& getInstance() {
        static InMemoryDataContainer s_instance;
        return s_instance;
    };

    void AddPatient(std::string first_name, std::string last_name) override;
    void AddDoctor(std::string first_name, std::string last_name, Speciality speciality) override;
    void AddNurse(std::string first_name, std::string last_name) override;
    void AddParamedic(std::string first_name, std::string last_name) override;
    void AddAssistivePersonnel(std::string first_name, std::string last_name) override;
    void AddDepartament(std::string departament_name) override;
    void AddRoom(std::string departament_name, int room_no, int room_capacity) override;

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
    void PrescribeMedication(int doctor_id, int patient_id, std::vector<std::string> medicines) override;
    void AdministerMedicine(int nurse_id, int patient_id, std::string medicine) override;
    void PerformSurgery(int doctor_id, int patient_id) override;
    void Discharge(int id) override;
    void Hospitalize(int patient_id, int assistant_id) override;
    void AssignRoom(int patient_id, int assistant_id, int room_no) override;

    std::vector<Patient *> findPatients(Patient patient_template) override;
    std::vector<Doctor *> findDoctors(Doctor doctor_template) override;
    std::vector<Nurse *> findNurses(Nurse nurse_template) override;
    std::vector<Paramedic *> findParamedics(Paramedic paramedic_template) override;
    std::vector<Assistant *> findAssistants(Assistant assistant_template) override;
    std::vector<Department *> findDepartments(std::string department_name_template) override;

    std::optional<Patient> GetPatient(int id) override;
    std::optional<Doctor> GetDoctor(int id) override;
    std::optional<Nurse> GetNurse(int id) override;
    std::optional<Paramedic> GetParamedic(int id) override;
    std::optional<Assistant> GetAssistant(int id) override;
    std::optional<Department> GetDepartment(std::string department_name) override;
    std::optional<Room> GetRoom(int room_no) override;
};



