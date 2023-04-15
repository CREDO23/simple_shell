ALX SIMPLE SHELL TEAM PROJECT


This simple shell projects mimics the bash shell. The shell is known as hsh and it was completed using C programming langauge, Shell and Betty linter.


General Requirement for project

Allowed editors: vi, vim, emacs.
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
All your files should end with a new line.
A README.md file, at the root of the folder of the project is mandatory.
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
Your shell should not have any memory leaks.
No more than 5 functions per file.
All your header files should be include guarded.
Use system calls only when you need to (why?).
Write a README with the description of your project.


Description

Our simple shell accepts, reads and executes commands from a file or a standard input. The compilation was done using the gcc -Wall -Wextra -Werror -pedantic -std=gnu89.


Usage

The shell can run in two modes that are; interactive mode and non-interactive mode. In the interactive mode, run the program and wait for the prompt part to appear and then exit using the "exit" or ctrl + D command.


HOW THE SIMPLE SHELL WORKS

Displays a prompt and wait for the user to type a command. A command line always ends with a new line.
Passes the Betty checks.
Handle command lines with arguments.
Implement the env built-in, that prints the current environment.
Has the exit built-in, that exits the shell.
Handle the PATH; fork must not be called if the command doesn't exist.
Handles arguments for the built-in exit.
Handles the setenv and unsetenv builtin commands.
Helps in  builtin command cd.
Handle the commands separator.
Handle the && and || shell logical operators.
Handle variables replacement.
Handle the $? variable.
Handle the $$ variable.
Handle comments (#).
Contains one command per line - for File as input

Included Built-Ins

Our shell has support for the following built-in commands:
exit - Exit the shell, with an optional exit status.
env - Print the environment.
setenv - Set an environment variable and value. If the variable exists, the value will be updated.
unsetenv - Remove an environment variable.
cd -Change the directory.
help [built-in]-Read documentation for a built-in.


