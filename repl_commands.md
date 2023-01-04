# REPL commands

## DML

TODO: refine

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
prescribe_meds doctor { id = <integer> }
               patient { id = <integer> }
               meds [ med1 [, med2][, med3][...] ]
administer_med nurse { id = <integer> }
               patient { id = <integer> }
               med <med1>
perform_surgery doctor { id = <integer> } patient { id = <integer> }
```

## DQL

TODO: design
