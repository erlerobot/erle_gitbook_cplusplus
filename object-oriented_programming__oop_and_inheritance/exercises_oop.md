## Exercises: OOP

######Exercises 1

Write a program that defines a shape class with a constructor that gives value to width and height.
The define two sub-classes triangle and rectangle, that calculate the area of the shape `area () `.
In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

**Solution:**
```cpp
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

