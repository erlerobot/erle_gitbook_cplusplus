#include <iostream>
using namespace std;

class Imagin{
	public:

	double x,y;
    Imagin(){}
	Imagin(double nx, double ny){
	x=nx;y=ny;}
    };

Imagin operator+(const Imagin  &num1, const Imagin &num2){
    Imagin temp;
    temp.x = num1.x + num2.x;
    temp.y = num1.y + num2.y;
    return temp;
    }

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

	Imagin result;
	result = number1+number2;
	cout << "The complex sum result is: "<<result.x << " + "<< result.y <<"i \n";

	return 0;
}