// Exercises: Pointers
// Exercise 1

#include <iostream>
using namespace std;

int main(){

    int  a; int b;
	cout << "Enter value of A: ";
	cin >> a;
	cout << "Enter value of B: ";
	cin >> b;

	int *ptrA=&a;
	int *ptrB=&b;

    cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";
    
	cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";

	return 0;
}