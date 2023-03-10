grammar ReplCommands;

LF: ('\r')? '\n';
ID: [a-zA-Z_][a-zA-Z0-9_-]*;
fragment DIGIT: [0-9];
INT: DIGIT+;
FLOAT: DIGIT+ '.' DIGIT+;
STRING: '"' .*? '"';

WS: [ \t]+ -> skip;

commandLine: command LF;
command 
    : 'add' object                                  # addCommand
    | 'delete' object                               # deleteCommand
    | 'update' object                               # updateCommand
    | 'examine' object object                       # examineCommand
    | 'prescribe' object object 'meds' medlist      # prescribeCommand
    | 'administer' object object 'med' ID           # administerCommand
    | 'surgery' object object                       # surgeryCommand
    | 'hospitalize' object object 'reason' STRING   # hospitalizeCommand
    | 'assign_room' object object 'number' INT      # assignRoomCommand
    | 'discharge' object object                     # dischargeCommand
    | 'search' object                               # searchCommand
    ;

object: ID '{' (properties)? '}';
properties: keyval (',' keyval)*;
keyval: ID '=' val ;
val: ID | INT | FLOAT;
medlist: ID (',' ID)*; 
