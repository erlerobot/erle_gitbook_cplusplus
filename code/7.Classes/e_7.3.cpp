// Exercises: Classes
// Exercise 3


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

	return 0;
}
