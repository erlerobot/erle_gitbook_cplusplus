##Enabling and Starting GDB

To enable gdb to be able to display the statements of your program, you must use the –g flag during compilation and linking of all files comprising your program. The –g flag causes the compiler and linker to maintain variable names and untranslated C++ statements, in order that variables can be examined and C++ statements can be displayed and followed.

To start a stand-alone gdb session, simply type `gdb <executable>` at the system prompt. For example, to debug `a.out`, issue the command
```
root@erlerobot:~#  >gdb a.out
```

gdb will start and load `a.out`.

Alternatively, gdb can be started by simply issuing the command gdb at the Unix prompt. To then load an executable, issue a file command` (gdb)file a.out`. For example:
```
root@erlerobot:~/GDB# ls
hello.cpp
root@erlerobot:~/GDB# g++ hello.cpp
root@erlerobot:~/GDB# ls
a.out  hello.cpp
root@erlerobot:~/GDB# ./a.out
 Hello , world !
root@erlerobot:~/GDB#
root@erlerobot:~/GDB#
root@erlerobot:~/GDB# gdb
GNU gdb (Ubuntu/Linaro 7.4-2012.04-0ubuntu2.1) 7.4-2012.04
Copyright (C) 2012 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "arm-linux-gnueabihf".
For bug reporting instructions, please see:
<http://bugs.launchpad.net/gdb-linaro/>.
(gdb)
(gdb) file a.out
Reading symbols from /root/GDB/a.out...(no debugging symbols found)...done.
(gdb)
```
Here you can find more information about files options: https://sourceware.org/gdb/current/onlinedocs/gdb/File-Options.html#File-Options

Another important task is to have the correct **working directory**.You can change it by using `cd`.
```
(gdb) file Hello
Hello: No such file or directory.
(gdb)
Hello: No such file or directory.
(gdb) cd /root/GDB
Working directory /root/GDB.
(gdb)
(gdb) file a.out
Reading symbols from /root/GDB/a.out...(no debugging symbols found)...done.
(gdb)
```
