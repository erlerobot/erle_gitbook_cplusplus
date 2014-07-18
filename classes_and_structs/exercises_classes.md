## Exercises: Classes

######Exercise 1
Write a class having two private variables and one member function which will return the area of the rectangle.

**Solution:**

```cpp
#include <iostream>
using namespace std;

class CRectangle {

  public:
   int x,y;
   int area(){return x*y;}

};



int main () {
  CRectangle rect;
  cout<<"Enter length of rectangle:";
  cin>>rect.x;
  cout<<"Enter breadth of rectangle:";
  cin>>rect.y;
  cout <<"Area:"<< rect.area();
  return 0;
}
```

######Exercise 2
Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.

**Solution:**
```cpp
#include <iostream>
using namespace std;

class data{
public:
int nu1,nu2;
   data(int numm1,int numm2){
nu1=numm1;nu2=numm2;cout <<"numbers initialized \n";
    }
    int sum_num(){return nu1+nu2;}
};


    int main ()
{
    int num1;
	int num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;


	data set_nu(num1,num2);

	cout << "The addition result on:"<< set_nu.sum_num()<<"\n";
	return 0;
}
```

######Exercise 3
Write a c++ class called 'student' with
```
Data members:

name(char type),

marks1,marks2 (integer type)

```

The program asks the user to enter name and marks.
Then calc_media() calculates the media note and disp() display name and total media mark on screen in different lines.

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Student{

	public:
	char *name;
	int mark1;int mark2;

	Student(char* na, int ma1,int ma2){
	name=na;mark1=ma1;mark2=ma2;
	}

	int calc_media(){return (mark1+mark2)/2;}

	void disp(){
	cout << "Student:" << name << " \n media:"<< calc_media() <<"\n";
	}

};

int main(){
	char* nam;int m1,m2;

	cout << "Enter name:";
	cin>> nam;
	cout << "Enter marks of two subjects:";
	cin>> m1;
	cin>> m2;
	Student student1(nam,m1,m2);
	student1.disp();
}
```
######Exercise 4

Perform addition operation on complex data using class and object. The program should ask for real and imaginary part of two complex numbers, and display the real and imaginary parts of their sum.

**Solution:**

```cpp
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
```
