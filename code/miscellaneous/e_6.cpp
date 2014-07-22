// Exercises: miscellaneous
//Exercise 6

#include <iostream>
using namespace std;
int factorial(int nu){
	int fac=1;
	for (int u=1;u<=nu; u++){
		fac=fac*u;
	}
	return fac;
}

int main(){
	int num;
	cout << "\n \n Please, enter a number:\n";
	cin >>num;

	cout <<"\n \n the factorial number is: " <<factorial(num);

}
