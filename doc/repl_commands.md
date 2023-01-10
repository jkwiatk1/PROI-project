# REPL commands

## DML

Create:

```
add patient { first_name = <first_name>, last_name = <last_name> }
add doctor { first_name = <first_name>, last_name = <last_name>, speciality =
<doctor_speciality> }
add nurse { first_name = <first_name>, last_name = <last_name> }
add paramedic { first_name = <first_name>, last_name = <last_name> }
add assistive_personnel { first_name = <first_name>, last_name = <last_name> }
add departament { name = <departament_name> }
add room { departament = <departament_name>, room_no = <integer> }
```

Delete:

```
delete patient { id = <integer> }
delete doctor { id = <integer> }
delete nurse { id = <integer> }
delete paramedic { id = <integer> }
delete assistive_personnel { id = <integer> }
delete departament { departament = <departament_name> }
delete room { departament = <departament_name>, room_no = <integer> }
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
update assistive_personnel { id = <integer>
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
               med <med1>
surgery doctor { id = <integer> } patient { id = <integer> }
hospitalize patient {}
discharge patient {}
```

## DQL

```
search patient {}
search doctor {}
search nurse {}
search paramedic {}
search assistant_personnel {}
search departament {}
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
type ::= `patient' | `doctor' | `nurse' | `paramedic' | `assistive_personnel'
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
