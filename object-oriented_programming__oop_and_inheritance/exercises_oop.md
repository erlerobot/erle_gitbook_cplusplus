## Exercises: OOP

######Exercises 1

Write a program that defines a shape class with a constructor that gives value to width and height.
The define two sub-classes triangle and rectangle, that calculate the area of the shape `area () `.
In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Shape
{
protected:
	float width, height;
public:
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}
};

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};

int main ()
{
	Rectangle rect;
	Triangle tri;
	rect.set_data (5,3);
	tri.set_data (2,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
```

######Exercise 2

Write a program with a mother class and an inherited daugther class.Both of them should have a method `void display ()`that prints a message (different for mother and daugther).In the main define a daughter and call the display() method on it.

**Solution:**
```cpp
#include <iostream>
using namespace std;

class mother
{
public:
	void display ()
	{
		cout << "mother: display function\n";
	}
};

class daughter : public mother
{
public:
	void display ()
	{
		cout << "daughter: display function\n\n";
	}
};

int main ()
{
	daughter rita;
	rita.display();
	return 0;
}

```

######Exercise 3

Write a probram with a mother class animal. Inside it define a name and an age variables, and set_value() function.Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).

**Solution:**
```cpp
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
	```
