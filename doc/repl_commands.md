# REPL commands

## DML

Create:

```
add patient { first_name = <first_name>, last_name = <last_name> }
add doctor { first_name = <first_name>, last_name = <last_name>, speciality =
<doctor_speciality> }
add nurse { first_name = <first_name>, last_name = <last_name> }
add paramedic { first_name = <first_name>, last_name = <last_name> }
add assistant { first_name = <first_name>, last_name = <last_name> }
add departament { name = <departament_name> }
add room { departament = <departament_name>, room_no = <integer>, capacity = <integer> }
```

Delete:

```
delete patient { id = <integer> }
delete doctor { id = <integer> }
delete nurse { id = <integer> }
delete paramedic { id = <integer> }
delete assistant { id = <integer> }
delete departament { departament = <departament_name> }
delete room { room_no = <integer> }
```

Update:

```
update patient { id = <integer>
                 [, first_name = <first_name>]
                 [, last_name = <last_name>] }
update doctor { id = <integer>
                [, first_name = <first_name>]
                [, last_name = <last_name>]
                [, doctor_speciality = <doctor_speciality>] }
update nurse { id = <integer>
               [, first_name = <first_name>]
               [, last_name = <last_name>] }
update paramedic { id = <integer>
                   [, first_name = <first_name>]
                   [, last_name = <last_name>] }
update assistant { id = <integer>
                             [, first_name = <first_name>]
                             [, last_name = <last_name>] }
update departament { departament_name = <departament_name>,
                     new_name = <departament_name> }
update room { departament = <departament_name>,
              room = <integer>,
              new_no = <integer> }
```

Domain operations:

```
examine doctor { id = <integer> } patient { id = <integer> }
| examine doctor { first_name = <first_name>, last_name = <last_name> }
          patient { id = <integer> }
| examine doctor { first_name = <first_name>, last_name = <last_name> }
          patient { first_name = <first_name>, last_name = <last_name> }
prescribe doctor { id = <integer> }
          patient { id = <integer> }
          meds [ med1 [, med2][, med3][...] ]
administer nurse { id = <integer> }
           patient { id = <integer> }
           med <med>
surgery doctor { id = <integer> } patient { id = <integer> }

hospitalize assistant { id = ... } patient { id = <integer> } reason "<text>"
assign_room assistant { id = ... } patient { id = ... } number <room_no>
discharge assistant { id = <integer> } patient { id = <integer> }
```

## DQL

Search patient:
```
# zwraca tylko tych pacjentów, których imiona zaczynają się na asdf. Nie
wyświetla ich kart.
search patient { first_name = asdf }

# zwraca tylko tych pacjentów, których imiona zaczynają się na asdf, a nazwiska
na fdsa. Nie wyświetla ich kart.
search patient { first_name = asdf, last_name = fdsa }

# zwraca tylko tego pacjenta, który ma id = 21. Nie wyświetla jego karty.
search patient { id = 21 }

# zwraca tylko tego pacjenta, który ma id = 21. Wyświetla jego kartę.
search patient { id = 21, show_card = true }

# zwraca wszystkich pacjentów
search patient {}

# zwraca wszystkich pacjentów hospitalizowanych, których imiona zaczynają się na asdf.
search patient { first_name = asdf, hospitalized = true }

# zwraca wszystkich pacjentów niehospitalizowanych, których imiona zaczynają się
na asdf.
search patient { first_name = asdf, hospitalized = false }
```

Search doctor:
```
# zwraca wszystkich lekarzy:
search doctor {}

# zwraca wszystkich lekarzy o dowolnej specjalizacji, których imiona zaczynają się na asdf:
search doctor { first_name = asdf }

# zwraca wszystkich lekarzy o specjalizacji Ophthalmologist:
search doctor { specialization = Ophthalmologist }
```

Search nurse/paramedic/assistant:
```
# zwracają wszystkich:
search nurse {}
search paramedic {}
search assistant {}

# zwracają osoby, których imiona zaczynają się na asdf:
search nurse { first_name = asdf }
search paramedic { first_name = asdf }
search assistant { first_name = asdf }

# zwracają osoby, których imiona zaczynają się na asdf a nazwiska na fdsa:
search nurse { first_name = asdf, last_name = fdsa }
search paramedic { first_name = asd, last_name = fdsaf }
search assistant { first_name = asd, last_name = fdsaf }
```

Department search:
```
# zwraca wszsytkie departamenty, których nazwy zaczynają się na asdf.
search departament { name = asdf }

# zwraca wszsytkie departamenty, których nazwy zaczynają się na asdf i drukuje
informacje o zawartości wszystkich pokoi.
search departament { name = asdf, info = true }
```

# BNF

```
LF ::= `\r\n' | `\n'
command ::= add command LF
        |   delete command LF
        |   update command LF
        |   examine LF
        |   prescribe meds LF
        |   administer med LF
        |   surgery LF
        |   search command LF

object ::= type `{' keyvals `}'
keyvals ::= `'
        |   keyval
        |   keyval, keyvals
keyval ::= string `=' string
type ::= `patient' | `doctor' | `nurse' | `paramedic' | `assistant'
     |   `departament' | `room'

add command ::= `add' object<identity>
delete command ::= `delete` object<identity>
update command ::= `update' object

examine ::= `examine' object<identity, doctor> object<identity, patient>
prescribe meds ::= `prescribe' object<identity, doctor> `meds' medlist
medlist ::= med
        |   med, medlist
med ::= string
administer med ::= `administer' object<identity, nurse> object<identity, patient> `med' med
surgery ::= `surgery' object<identity, doctor> object<identity, patient>

search ::= `search` object
```
