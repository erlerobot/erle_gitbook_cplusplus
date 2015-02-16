## Erle-Brain and GDB

By default you should have GDB installed in your Erle-Brain. You can start a gdb debugging session by typing `gdb` and close it using the command `quit`as shown below.You can always ask GDB itself for information on its commands, using the command `help`.

```
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
(gdb)
(gdb)
(gdb)
(gdb) quit
```

If you don't have it installed you can dowload it from the source [here](ftp://ftp.gnu.org/gnu/gdb/).
(Dowload directly in erleboard if you have internet- connection through a wireless network card- or download it to your PC and follow the suitable steps [here](http://erlerobotics.gitbooks.io/erle_gitbook_unixintroduction/annex_iii_network_connection_with_erle/README.html).)

Then from the command line do the following.Decompress the file and configure it:
```
root@erlerobot:~# tar -xzvf gdb-7.7.tar.gz
root@erlerobot:~# cd gdb-7.7
root@erlerobot:~# ./configure --disable-intl
...
```
Compile the source:
```
root@erlerobot:~# make
...
```
And install it:
```
root@erlerobot:~# sudo make install
...
```

