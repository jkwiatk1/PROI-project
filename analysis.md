# Procesy w Szpitalu

Poniższa sekcja nie wynika z tematu zadania. Jest próbą połączenia wymagań,
które stawia zadanie, oraz wiedzy ogólnej, żeby zbudować ściślejszy obraz
projektu, który mamy wykonać.

## Leczenie pacjenta

1. Pacjent zostaje przyjęty do szpitala. Zakładana jest karta zdrowia.
Odnotowywany jest sposób przybycia do szpitala.
2. Pacjent jest kierowany na badanie wstępne, które zostaje umieszczone w
karcie zdrowia.
3. Jeżeli pacjent wymaga długotrwałego leczenia:
3.1. Pacjent jest przydzielany do oddziału
3.2. Pacjent umieszczany jest na sali
3.3. Na pacjencie mogą być wykonywane badania oraz zabiegi. Pacjentowi mogą być
     podawane leki. Każde badanie, zabieg lub podanie leku są odnotowywane na
     karcie zdrowia.
4. Pacjent jest zwalniany ze szpitala.

# Encje

Poniższa sekcja zawiera pewne wyobrażenie encji, które znajdą się w projekcie.

```
// Every entity has to be:
// - Creatable
// - Deletable
// - Editable
// - Querable

Patient {
	string first_name;
	string last_name;
	Date date_of_birth;
	enum status; // Hospitalized or Discharged
	Room? room; // None iff Discharged, a Room iff not.
	// Actions:
	// - Hospitalize
	// - Discharge
	// - Examine(Doctor)
	// - PerformSurgeryOn(Doctor)
}

// Realizacja typów pracowników ma więcej sensu przez pole `enum
// employee_type` niż przez hierarchię dziedziczenia. Dziedziczenie sprawia, że
// dla każdego nowego typu pracownika musimy stworzyć nową klasę. Część z klas
// pracowników nie ma żadnych pól lub akcji. Dodatkowo, w niektórych miejscach
// tracimy informację o typie pracownika, gdzie byłaby ona porządana. Przykład:
// klasa Action. Żeby wydrukować informacje o pracowniku trzeba się posłużyć
// upcastem, żeby zamienić Employee na np. Doctor, żeby otrzymać pełne
// informacje o osobie która wykonała akcję. Upcasty w C++ są skomplikowane i
// działają lepiej w językach takich jak C# lub Java.

Employee {
	string first_name;
	string last_name;
	Departament departament;
}

Doctor : Employee {
	enum specialization;
	// Actions:
	// - Examine (zbadaj pacjenta)
	// - Prescribe (daj receptę)
}

Nurse : Employee {
	// Actions:
	// - AdministerMedicine (podaj lekarstwo, również w formie zastrzyku)
}

Paramedic : Employee {
}

AssistivePersonel : Employee {
}

Department {
	string name;
}

Room {
	Departament departament;
	string number;
	string capacity;
	Patient[] patients;
}

MedicalHistory { // To ma reprezentować "kartę zdrowia".
	Patient patient;
	Action[] history;
	Disease[] past_diseases;
	Disease[] current_diseases; 
	// A Disease in past_diseases must have end_date != None.
	// A Disease in current_diseases must have end_date == None.
	// Actions:
	// AddAction(Employee)
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
```
