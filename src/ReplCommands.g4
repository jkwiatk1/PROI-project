grammar ReplCommands;

LF: '\r'?'\n';

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

object: TYPE '{' keyvals '}';
keyvals: keyval (',' keyval)*;
keyval: KEY '=' VALUE;
KEY: [a-zA-Z_][a-zA-Z0-9_]*;
VALUE: [a-zA-Z0-9]+;
TYPE
	: 'patient'
	| 'doctor'
	| 'nurse'
	| 'paramedic'
	| 'assistant'
	| 'departament'
	| 'room'
	;

addCommand: 'add' object;
deleteCommand: 'delete' object;
updateCommand: 'update' object;
examineCommand: 'examine' object object;
prescribeCommand: 'prescribe' object 'meds' medlist;
/* TODO: Replace KEY with a proper medicine synta x*/
medlist: KEY (',' KEY)*; 
administerCommand: 'administer' object object 'med' KEY;
surgeryCommand: 'surgery' object object;
searchCommand: 'search' object;
hospitalizeCommand: 'hospitalize' object;
dischargeCommand: 'discharge' object;
