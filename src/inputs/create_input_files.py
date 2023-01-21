#!/usr/bin/python3

commands = {
    'add_patient': "add patient { first_name = Jan, last_name = Kowalski }",
    'add_doctor': "add doctor {first_name = Maksym, last_name = Goldbaum-Miller, speciality = Ophtalmologist }",
    'add_nurse': "add nurse { first_name = Beatrice, last_name = Kiddo }",
    'add_paramedic': "add paramedic { first_name = Jan, last_name = Kowalski }",
    'add_assistant': "add assistant {first_name = Jan, last_name = Kowalski }",
    'add_departament': "add departament { name = Cardiology }",
    'add_room': "add room { departament = Cardiology, room_no = 201 }",
    'delete_patient': "delete patient { id = 1 }",
    'delete_doctor': "delete doctor { id = 1 }",
    'delete_nurse': "delete nurse { id = 1 }",
    'delete_paramedic': "delete paramedic { id = 1 }",
    'delete_assistant': "delete assistant { id = 1 }",
    'delete_departament': "delete departament { departament = Cardiology }",
    'delete_room': "delete room { departament = Cardiology, room_no = 1 }",
    'update_patient': "update patient { id = 1 , first_name =  , last_name = Kowalski }",
    'update_doctor': "update doctor { id = 1 , first_name = Jan , last_name = Kowalski , doctor_speciality = Ophthamologist }",
    'update_nurse': "update nurse { id = 1 , first_name = Jan , last_name = Kowalski }",
    'update_paramedic': "update paramedic { id = 1 , first_name = Jan , last_name = Kowalski }",
    'update_assistant': "update assistant { id = 1 , first_name = Jan , last_name = Kowalski }",
    'update_departament': "update departament { departament_name = Cardiology, new_name = Cardiology2 }",
    'update_room': "update room { departament = Cardiology, room = 1, new_no = 1 }",
    'examine': "examine doctor { id = 1 } patient { id = 1 }",
    'prescribe_multiple': "prescribe doctor { id = 1 } patient { id = 1 } meds Aspiryna, Paracetamol",
    'prescribe_single': "prescribe doctor { id = 1 } patient { id = 1 } meds Aspiryna",
    'administer': "administer nurse { id = 1 } patient { id = 1 } med Ibuprofen",
    'surgery': "surgery doctor { id = 1 } patient { id = 1 }",
    'hospitalize': "hospitalize patient {}",
    'discharge': "discharge patient {}",
    'search_patient': "search patient {}",
    'search_doctor': "search doctor {}",
    'search_nurse': "search nurse {}",
    'search_paramedic': "search paramedic {}",
    'search_assistant': "search assistant {}",
    'search_departament': "search departament {}",
}

for filename, contents in commands.items():
    with open(filename, 'w') as file:
        file.write(contents)
        file.write('\n')
