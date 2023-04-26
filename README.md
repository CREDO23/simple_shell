# simple_shell
A simple_shell program based on the Thomson Shell which replicates functionalities of the simple shell (sh). Additional functions are also included. 
This program was coded in C programming language as a milestone project for ALX Africa Software Engineering.

## General Requirement for project
+ Allowed editors: vi, vim, emacs.
+ Files compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All files end with a new line.
+ A README.md file present at the root of the folder.
+ The code uses the Betty style and it checked using betty-style.pl and betty-doc.pl
+ Absence of any memory leaks
+ No more than 5 functions per file
+ All your header files were include guarded

## Description
Our simple shell accepts, reads and executes commands from a file or a standard input. The compilation was done using the gcc -Wall -Wextra -Werror -pedantic -std=gnu89.

## Usage
The shell can run in two modes that are; interactive mode and non-interactive mode. 
**Interactive mode**
In the interactive mode, run the process and wait for the prompt part to appear and then exit using the "exit" command.
**Non-interactive mode**
The process will exit after finishing the command(s).

## Environment
Our simple shell was built and tested on basic Ubuntu 20.04.

## Features of the simple_shell
+ Displays a prompt and wait for the user to type a command. A command line always ends with a new line.
+ Passes the Betty checks.
+ Handle command lines with arguments.
+ Implement the env built-in, that prints the current environment.
+ Has the exit built-in, that exits the shell
+ Handle the PATH; fork must not be called if the command doesn't exist.
+ Handles arguments for the built-in exit.
+ Handles the setenv and unsetenv builtin commands.
+ Helps in  builtin command cd.
+ Handle the commands separator.
+ Handle the && and || shell logical operators.
+ Handle variables replacement
+ Handle the $? variable
+ Handle the $$ variable
+ Handle comments (#).
+ Support the history feature
+ Support the file input

## Builtin commands
Our simple_shell supports the following builtin commands.
| Command | Description |
| --- | --- |
|  cd  | change directories |
| help | Read documentation for builtins |
| exit | Exit the shell |
| env | Prints the environment |
| setenv | Set an environment variable and value |
| unsetenv | Unsets/removes environment variables |


## Authors
+ Bakera Thierry
+ Vallentine Nyabuto
