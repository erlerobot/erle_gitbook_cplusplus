## Exercises: Memory

######Exercise 1
Given the following code add a destructor for Foo class.
```cpp
#include <iostream>

class Foo {
public:
    Foo( void )
    { std::cout << "Foo constructor 1 called" << std::endl; }


int main( )
{
    Foo foo_1;
    return 0;
}
```
[Solution](../code/9.Memory/e_9.1.cpp)

######Exercise 2
Write  program that ask for the numbers of elements in an array and then fill it in. Use new and delete.

[Solution](../code/9.Memory/e_9.2.cpp)

######Exercise 3

Write a program containing a constructor and a destructor for an array.The body shuld be :
```cpp
int main() {
 IntegerArray a(2);//This call the constructor
 a.data[0] = 4; a.data[1] = 2;
 if (true) {
 IntegerArray b = a;
 }
 cout << a.data[0] << endl; // The result is 4
}
```

Note: Pass the data to the data_construtor by reference.


[Solution](../code/9.Memory/e_9.3.cpp)


