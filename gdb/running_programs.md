## Running programs

Use the run command to start your program under GDB. You must first specify the program name (except on VxWorks) with an argument to GDB (see Getting In and Out of GDB), or by using the `file` or `exec-file command.

If you are running your program in an execution environment that supports processes, run creates an inferior process and makes that process run your program. In some environments without processes, run jumps to the start of your program.


The execution of a program is affected by certain information it receives from its superior. GDB provides ways to specify this information, which you must do **before starting** your program. (You can change it after starting your program, but such changes only affect your program the next time you start it.) This information may be divided into four categories:

- *The arguments.*

Specify the arguments to give your program as the arguments of the run command. If a shell is available on your target, the shell is used to pass the arguments, so that you may use normal conventions (such as wildcard expansion or variable substitution) in describing the arguments. In Unix systems, you can control which shell is used with the SHELL environment variable. If you do not define SHELL, GDB uses the default shell (/bin/sh). You can disable use of any shell with the set startup-with-shell command (see below for details).

- *The environment.*

Your program normally inherits its environment from GDB, but you can use the GDB commands set environment and unset environment to change parts of the environment that affect your program. See Your Program’s Environment.

- *The working directory.*


Your program inherits its working directory from GDB. As we have coment previously, you can set the GDB working directory with the `cd` command in GDB.

- *The standard input and output.*


Your program normally uses the same device for standard input and standard output as GDB is using. You can redirect input and output in the run command line, or you can use the tty command to set a different device for your program. See Your Program’s Input and Output.

Warning: While input and output redirection work, you cannot use pipes to pass the output of the program you are debugging to another program; if you attempt this, GDB is likely to wind up debugging the wrong program.

For more information visit: https://sourceware.org/gdb/current/onlinedocs/gdb/Starting.html#Starting
