## C++ and erleboard

You should be able to run C++ programs in erleboard:
- Create a file with the correcte extension `.cpp`, you can use *vim text editor*.
-  Use gcc to compile it.The syntax is the following:
```
gcc filename.cpp -o executablename
```
or
```
g++ filename.cpp -o executablename
```
- Now you have an executable file `executablename`.Do `./executablename`to compile it.

Example:
```
root@erlerobot:~/C++# ls
hello.cpp
root@erlerobot:~/C++# gcc hello.cpp -o Hello
root@erlerobot:~/C++# ls
Hola  hello.cpp
root@erlerobot:~/C++#
root@erlerobot:~/C++# ./Hello
Hello World!
```
