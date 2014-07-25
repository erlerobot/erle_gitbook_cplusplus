## GDB commands


When GDB starts, the loaded executable is not running; there are many commands that can be issued to prepare debugging. A GDB command is a single line of input. There is no limit on how long it can be. It starts with a command name, which is followed by arguments whose meaning depends on the command name.

A glossary of commands can be displayed by issuing the command.
 ```
(gdb)help
 ```
There will be a list of command areas, each of which has its own help list. For example,
 ```
(gdb)help running
 ```
will list commands available for running a program. If you issue a help command followed by and actual command, the help information for that command will be displayed.

Commands can often be issued without typing the entire command. Here are some commonly used commands; many of them can be invoked using only the first letter:
```
 (gdb) quit – exit the debugger
 (gdb) file – load an executable file
 (gdb) break line-number/function name -- Set a break-point on a line/at start of function
 (gdb) run <args> -- start running the program; if there are command-line arguments, put them after the run invocation
 (gdb) cont -- continue running, after a break
 (gdb) next -- Next program line (step over function calls)
 (gdb) step -- Step into function calls.
 (gdb) finish - Step out of the present function
 (gdb) print expression -- Show value of a variable or expression
 (gdb) list – List 10 lines of the program being debugged. The sixth line is the preset statement. Subsequent, consecutive entry of list will list the next 10 lines.
 (gdb) where – obtain a backtrace showing all function calls before the current statement
 (gdb) up – Move to the function that called the present function. Useful if your program crashes in a library function; use up to get to the last function call in your program
 (gdb) down – Reverses the action of up
 (gdb) delete – Removes breakpoint by number (see example following). If no number, all deleted.
 (gdb) kill – Terminates the program.
 (gdb) info- This command (abbreviated i) is for describing the state of your program. For example, you can show the arguments passed to a function with info args, list the registers currently in use with info registers, or list the breakpoints you have set with info breakpoints. You can get a complete list of the info sub-commands with help info.
(gdb) set-You can assign the result of an expression to an environment variable with set. For example, you can set the GDB prompt to a $-sign with set prompt $.
(gdb)show-In contrast to info, show is for describing the state of GDB itself. You can change most of the things you can show, by using the related command set; for example, you can control what number system is used for displays with set radix, or simply inquire which is currently in use with show radix.
 ```
######Other interesting commands

`Break`: To set a breakpoint on a line, issue the break command with a line number. For example, to set a breakpoint on line 43, issue b 43  . To set a breakpoint at the start of a function, issue the break command with the function name. For example, to suspend execution and enter debugging mode at the start of function foo, issue b foo  . To debug from the start of the program, issue b main
            In projects with multiple files, a breakpoint can be set in an associated file using `<file name>:line number`.
            A breakpoint can be set at the beginning of an object’s function using` <class>::<function>`.

 Note: In IDEs a breakpoint is set explicitly within the program code in a window.

`Print`:    The print command has great functionality. You can enter just about any valid expression, and it will be evaluated an printed. You can print the values of pointers, dereference a pointer, and print entire arrays and objects. See the emacs example on the next page for sample uses of the print command.

[######Logging output](https://sourceware.org/gdb/current/onlinedocs/gdb/Logging-Output.html#Logging-Output)


You may want to save the output of GDB commands to a file. There are several commands to control GDB’s logging.

`set logging on`: Enable logging.

`set logging off`
Disable logging.

`set logging file file`
Change the name of the current logfile. The default logfile is gdb.txt.

`set logging overwrite [on|off]`
By default, GDB will append to the logfile. Set overwrite if you want set logging on to overwrite the logfile instead.

`set logging redirect [on|off]`
By default, GDB output will go to both the terminal and the logfile. Set redirect if you want output to go only to the log file.

`show logging`
Show the current values of the logging settings.

[######Comands to specify files](https://sourceware.org/gdb/current/onlinedocs/gdb/Files.html#Files)

`file filename`
Use filename as the program to be debugged. It is read for its symbols and for the contents of pure memory. It is also the program executed when you use the run command. If you do not specify a directory and the file is not found in the GDB working directory, GDB uses the environment variable PATH as a list of directories to search, just as the shell does when looking for a program to run. You can change the value of this variable, for both GDB and your program, using the path command.

You can load unlinked object .o files into GDB using the file command. You will not be able to “run” an object file, but you can disassemble functions and inspect variables. Also, if the underlying BFD functionality supports it, you could use gdb -write to patch object files using this technique. Note that GDB can neither interpret nor modify relocations in this case, so branches and some initialized variables will appear to go to the wrong place. But this feature is still handy from time to time.

`file`
file with no argument makes GDB discard any information it has on both executable file and the symbol table.

`exec-file [ filename ]`
Specify that the program to be run (but not the symbol table) is found in filename. GDB searches the environment variable PATH if necessary to locate your program. Omitting filename means to discard information on the executable file.
