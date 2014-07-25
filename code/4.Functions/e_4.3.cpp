// Exercises: Functions
// Exercise 1

#include <iostream>
using namespace std;

int max_two(int a, int b){
	int maxi;
	if (a>b)
	maxi=a;
	else
	maxi=b;
	return maxi;
}

int main(){
	
	int num1;int num2;int maximun;
	cout<< "Enter first number:";
	cin>> num1;
	cout<< "Enter second number:";
	cin>> num2;
	
	maximun=max_two(num1,num2);
	cout<< "The maximun of "<< num1 << " and " << num2 << " is: " << maximun <<"\n";

	return 0;
}