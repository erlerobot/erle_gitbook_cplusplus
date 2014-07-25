// Exercises: Memory
// Exercise 1

#include <iostream>

class Foo {
public:
	Foo( void )
    { std::cout << "Foo constructor 1 called" << std::endl; }
    ~Foo( void )
    { std::cout << "Foo destructor called" << std::endl; }
}
int main( int argc, char **argv )
{
    Foo foo();
    ~Foo foo();
    return 0;
}