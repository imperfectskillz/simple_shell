 Simple Shell - Command Line Interface

## Shannon Anderson-Cockern and James Choi
   Special thanks to: Henry Hsu and Dave Yoon

## Description
``Simple Shell`` is a imitation of the command line interface in C. Reads input,
processes user input as command, then executes.

## File Listing

|  *Filename*    |		*Description*				|
|----------------|------------------------------------------------------|
| main.c	 |	Main that runs the program			|
| path_token.c 	 |	Tokenizes the PATH				|
| shell_env.c	 |	Prints env    					|
| shell_execute.c|	Fork, Execute, Wait				|
| shell_exit.c 	 |	Exits Shell    					|
| shell_getline.c|	Gets user input					|
| shell_loop.c   |	Loops through the program			|

### How to compile
`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

## How it works
Shell prompts user for input. User types in command. Shell tokenizes the command
. Looks to match built-in "exit" or "env". If not found, searches through the en
vironment for PATH. Tokenizes the PATH. If command matches the variable in PATH,
returns the full address of the directory. Once the full program address is foun
d, it's fed into the execution which forks, executes, waits. Process finishes.

