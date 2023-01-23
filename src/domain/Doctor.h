#pragma once

#include <optional>

#include "Employee.h"
#include "Patient.h"

// Remember to update Doctor::parseSpeciality and Doctor::getSpecialities if you
// change this.
enum Speciality { Ophthalmologist, Surgeon, Cardiologist, Neurologist };

class Doctor : public Employee
{
  private:
    Speciality speciality;

  public:
    Doctor();
    Doctor(std::string first_name, std::string last_name,
           Speciality speciality);

    Speciality getSpeciality() const;
    void setSpeciality(Speciality speciality);

    void examine(Patient &patient);
    void performSurgery(Patient &patient);
    void prescribeMedicine(Patient &patient,
                           std::vector<std::string> medicines);

    bool fuzzyEquals(const Doctor &other);

    static std::optional<Speciality> parseSpeciality(std::string speciality);
    static std::vector<std::string> getSpecialities(void);
};
