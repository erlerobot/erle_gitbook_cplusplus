## Hello World

In the tradition of programmers everywhere, we’ll use a “Hello, world!” program as an entry
point into the basic features of C++.
```cpp
#include <iostream>

int main () {
	std :: cout << " Hello , world !\n ";
	return 0;
}
 ```
 There is also another possibilities, like this one:
```cpp
#include<stdio.h>

int main(){
	printf("Hola Mundo! \n ");
	return 0;
}
```
Take into account the following:
- A statement is a unit of code that does something – a basic building block of a program.
- An expression is a statement that has a value – for instance, a number, a string, the
sum of two numbers, etc. 4 + 2, x - 1, and "Hello, world!\n" are all expressions.
Not every statement is an expression. It makes no sense to talk about the value of an
`#include` statement, for instance.
