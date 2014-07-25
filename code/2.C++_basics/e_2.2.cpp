// Exercise: Basics
// Exercise 2

#include <iostream>


int main (){

	std::cout << "What's your name?";
	char name[10];
	std::cin >>name ;
	std::cout << "Hello ";
	std::cout<< name;

    return 0;
}

// This exercise is an example of not using `using namespace std ;`.