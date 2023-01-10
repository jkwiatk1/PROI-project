# Encje

Poniższa sekcja zawiera pewne wyobrażenie encji, które znajdą się w projekcie.

```
// Every entity has to be:
// - Creatable
// - Deletable
// - Editable
// - Querable

Patient {
	// PK: (id)
  int id;
	string first_name;
	string last_name;
	Date date_of_birth;
	enum status; // Hospitalized or Discharged
	Room? room; // None iff Discharged, else a Room.
	Action[] history;
	Disease[] past_diseases;
	Disease[] current_diseases;

	// A Disease in past_diseases must have end_date != None.
	// A Disease in current_diseases must have end_date == None.

	// Actions:
	// - Hospitalize
	// - Discharge
	// - AddAction(Employee)
}

Action {
	enum type;
	Date date;
	Employee[] performers;
}

Disease {
	enum type;
	Date start_date;
	Date? end_date;
}

Employee {
	PK: (id)
	int id;
	enum employee_type; // { Doctor, Nurse, Paramedic, AssistivePersonel }
	// AssistivePersonel odpowiada Salowej.
	string first_name;
	string last_name;
	Departament departament;


	// Doctor:
	enum? specialization;
	// Actions:
	// - Examine (zbadaj pacjenta)
	// - Prescribe (daj receptę) (proponuję pominąć)
	// - PerformSurgery (wykonaj operację)

	// Nurse:
	// Actions:
	// - AdministerMedicine (podaj lekarstwo, również w formie zastrzyku)
}

Department {
	// PK: (id)
	string id; // czytelny kod, np. CARDIO
	string name;
}

Room {
	// PK: (departament, number)
	Departament departament;
	string number;
	string capacity;
	Patient[] patients;
}
```

# Polecenia REPL

Poniżej znajdują się listy poleceń, które musi wspierać REPL. Składnia polecenia
nie została jeszcze opracowana, więc zapisano je w formie abstrakcyjnej.
Polecenie ma nazwę i argumenty.

DML:

- `Add(Patient)`
- `Delete(Patient)`
- `Modify(Patient)`
- `Add(Employee)`
- `Delete(Employee)`
- `Modify(Employee)`
- `Add(Departament)`
- `Delete(Departament)`
- `Modify(Departament)`

DML, ale te ważne:

- `Hospitalize(Patient, Room)` (przyjmij do szpitala)
- `Discharge(Patient)` (zwolnij ze szpitala)
- `Examine(Employee{Doctor}, Patient)` (badanie lub konsultacja ze specjalistą)
- `Prescribe(Employee{Doctor}, Patient, string[] medicine)` (przypisanie leków)
- `AdministerMedicine(Employee{Nurse}, Patient, string medicine)`
- `PerformSurgery(Employee{Doctor}, Patient)`

DQL:

- `Show(Patient)` (odpowiednik SELECT)
- `Show(Employee)`
- `Show(Departament)`
