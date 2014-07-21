## Exercises: Advanced II

######Exercise 1

Write a program that enumerate some auto's brands.
Then create a variable called `my_car_brand` and make it equal to one of them. Print a message saying hello to the user.

**Solution:**
```cpp
enum e_acomany {
	Audi=4,
	BMW=5,
	Cadillac=11,
	Ford=44,
	Jaguar=45,
	Lexus,
	Maybach=55,
	RollsRoyce=65,
	Saab=111
};

 int main(){
 e_acompany my_car_brand;
my_car_brand = RollsRoyce;


if (my_car_brand == RollsRoyce)
	cout << "Hello, Ford-car owner!" << endl;}

	```


######Exercise 2

Write a simple program:
- read() is a function that ask for a name and returns a string containing the name.
- in the main() you should ask for the name and write a hello message.

**Solution:**
```cpp
#include<iostream>
using namespace std;


string read(){

string name;
	cout <<"Enter your name:";
	cin>> name;
	cout << "\n";
	return name;
}

int main(){
	string your_name;
	your_name=read();

cout << "Hello " << your_name << "!\n";
}
```

######Exercise 3
Create a clas called Rectangle.It should contain a constructor for width and height, a function that returns the area and a friend fucntion that duplicate the rectangle's dimensions.
In the main, creaate a rectangle instance, duplicate it and print out the area.

**Solution:**
```cpp
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle() {}
    Rectangle (int x, int y) : width(x), height(y) {}
    int area() {return width * height;}
    friend Rectangle duplicate (const Rectangle&);
};

Rectangle duplicate (const Rectangle& param)
{
  Rectangle res;
  res.width = param.width*2;
  res.height = param.height*2;
  return res;
}

int main () {
  Rectangle foo;
  Rectangle bar (2,3);
  foo = duplicate (bar);
  cout << foo.area() << '\n';
  return 0;
}
```
######Exercise 4
Create a class called Box with a variable: width of type double. Inside the class define a constructor and a friend that prints the width value(printWidth).
In the main() define a Box instance, set values and  call printWidth.

**Solution:**

```cpp
#include <iostream>

using namespace std;

class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid ){width = wid;}
};



void printWidth( Box box )
{

   cout << "Width of box : " << box.width <<endl;
}


{
   Box box;


   box.setWidth(10.0);


   printWidth( box );

   return 0;
}
```
