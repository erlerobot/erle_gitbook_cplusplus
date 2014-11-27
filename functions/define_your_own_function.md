## Define your own function

Continuing with the example of the previus section,
what about defining our own fuction to do 3^4, like this:

```cpp
#include <iostream>
using namespace std;

// some code which raises an arbitrary integer
// to an arbitrary power

int main() {

 int threeExpFour = raiseToPower(3, 4);

 cout << "3^4 is " << threeExpFour << endl;

 return 0;
}
```

The function `raiseToPower`must be declared, like this:
```cpp
int raiseToPower(int base, int exponent){
 int result = 1;
 for (int i = 0; i < exponent; i = i + 1){
  result = result * base;
 }
 return result;
}
```
So, the function declaration syntax is the following:
```
[return type][functioname](arguments)
{
statement1;
statement2;
...
}
```
Note that arguments are declared with type: `int base`.They are separated by ','.


So the final result is this:
```cpp
#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i = i + 1){
		result = result * base;
	}
	return result;
}

int main() {
	int threeExpFour = raiseToPower(3, 4);
	cout << "3^4 is " << threeExpFour << endl;

	return 0;
}
```
Note that the function must be declared before it is called.

###### Key ideas when declaring functions

The key ideas when declaring the function are the following:

- Up to one value may be returned; it must be the same type as
the return type.


- If no values are returned, give the function a void return type. (e.g.: `return 0;` or `return;`)


- If there are many functions with the same name, but
different arguments, the called function is the one whose
arguments match the invocation.

- `void` type is used when the function has no return value:
```cpp
void printOnNewLine(int x)
{
	cout << "1 Integer: " << x << endl;
}
```

- Function declarations need to occur before invocations. You can use a function prototype to inform the compiler
you’ll implement it later(Function prototypes should match the signature of the
method, though argument names don’t matter
):

```cpp
int square(int); //This is the prototype

int cube(int x)
{
	return x*square(x);
}

int square(int x) //Here is the declaration
{
	return x*x;
}
```

- Function prototypes are generally put into separate
header files – Separates specification of the function from its
implementation :

```cpp
// myLib.h - header
// contains prototypes

int square(int);
int cube (int);
 ```
Libraries are generally distributed as the
header file containing the prototypes.
```cpp
// myLib.cpp - implementation
#include "myLib.h"

int cube(int x){
	return x*square(x);
}

int square(int x){
	return x*x;
}

```
Library user only needs to know the function prototypes (in
the header file), not the implementation source code (in the
.cpp file) . The Linker (part of the compiler) takes care of locating the
implementation of functions in the .dll file at compile time .


- Functions can call themselves.

```cpp
int fibonacci(int n){
	if (n == 0 || n == 1) {
		return 1;
	}else {
		return fibonacci(n-2) + fibonacci(n-1);
	}
}
```
