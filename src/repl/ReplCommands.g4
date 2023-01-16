grammar ReplCommands;

LF: ('\r')? '\n';
ID: [a-zA-Z_][a-zA-Z0-9_-]*;
fragment DIGIT: [0-9];
INT: DIGIT+;
FLOAT: DIGIT+ '.' DIGIT+;

WS: [ \t]+ -> skip;

commandLine: command LF;
command
	: addCommand
	| deleteCommand
	| updateCommand
	| examineCommand
	| prescribeCommand
	| administerCommand
	| surgeryCommand
	| hospitalizeCommand
	| dischargeCommand
	| searchCommand
	;

addCommand: 'add' object;
deleteCommand: 'delete' object;
updateCommand: 'update' object;
examineCommand: 'examine' object object;
prescribeCommand: 'prescribe' object object 'meds' medlist;
administerCommand: 'administer' object object 'med' ID;
surgeryCommand: 'surgery' object object;
hospitalizeCommand: 'hospitalize' object;
dischargeCommand: 'discharge' object;
searchCommand: 'search' object;

object: ID '{' (keyvals)? '}';
keyvals: keyval (',' keyval)*;
keyval: ID '=' val ;
val: ID | INT | FLOAT;
medlist: ID (',' ID)*; 
