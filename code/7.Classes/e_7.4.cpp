// Exercise: Classes
// Exericse 4

#include <iostream>
using namespace std;

class Imagin{
	public:

	double x,y;

	Imagin(double nx, double ny){

	x=nx;y=ny;}
};

int main(){

	double nu1,nu2;
	cout << "first number \n";
	cout<< "Enter the real part:";
	cin>> nu1;
	cout<< "Enterthe imaginary part:";
	cin>> nu2;
	Imagin number1(nu1,nu2);
	cout << "second number \n";
    double nu3,nu4;
	cout<< "Enter the real part:";
	cin>> nu3;
	cout<< "Enterthe imaginary part:";
	cin>> nu4;
	
	Imagin number2(nu3,nu4);

	double real;

    real = number1.x +number2.x;

    double imagin;

    imagin = number2.x + number1.y;

    cout << "the sum of the real parts is "<< real << "\n";
    cout << "the sum of the imaginary parts is "<<imagin;

    return 0;
}