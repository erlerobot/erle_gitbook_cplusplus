// Exercises: OOP
// Exercise 3

#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
	protected:
	 int age;char name[10];
	public:
	 void set_data (int a, char b[10])
	 {
		age = a;
		strcpy(b,name);
	 }

};

class Zebra:public Animal
{public:

void message_zebra()
{cout<< "The zebra named "<< name<<" is "<< age << "years old. The zebra comes from Africa. \n";}
};

class Dolphin: public Animal
{public:

void message_dolphin()
{cout<< "The dolphin named "<< name<< " is "<<age << "years old. The dolphin comes from New Zeland.\n";}
};


int main ()
{
	Zebra zeb;
	Dolphin dol;
	char n1[10]="Ana";
	char n2[10]="Jin";

	zeb.set_data (5,n1);
	dol.set_data (2,n2);

	zeb.message_zebra() ;
	dol.message_dolphin() ;

	return 0;