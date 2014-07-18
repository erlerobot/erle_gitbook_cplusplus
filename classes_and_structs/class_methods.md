## Class Methods

Methods are functions which are part of a class.
Functions associated with a class are declared in one of two ways:
```
ReturnType FuncName(params) { code }
function is both declared and defined (code provided)
ReturnType FuncName(params);
```
function is merely declared, we must still define the body of the function separately
To call a method we use the `.` form:
```
classinstance.FuncName(args);
```
FuncName is a field just like any other field in the structured variable classinstance.

```cpp
Vector vec;
vec.start.x = 1.2; vec.end.x = 2.0;
vec.start.y = 0.4; vec.end.y = 1.6;
vec.print();\\Method
vec.offset(1.0, 1.5);\\ Arguments can be passed
to methods.

```
Note: Implicitly pass the current instance.

To be able to call this methods the definietion of the Vector class should be:
```cpp
class Vector {
public:
 Point start;
 Point end;
 void offset(double offsetX, double offsetY) {
 start.x += offsetX;
 end.x += offsetX;
 start.y += offsetY;
 end.y += offsetY;
 }
 void print() {
 cout << "(" << start.x << "," << start.y << ") -> (" << end.x <<
"," << end.y << ")" << endl;
 }
};

```

######Implementing Methods Separately

Recall that function prototypes allowed us to
declare that functions will be implemented later.

```cpp
// vector.h - header file
class Point {
public:
 double x, y;
 void offset(double offsetX, double offsetY);
 void print();
};
class Vector {
public:
 Point start, end;
 void offset(double offsetX, double offsetY);
 void print();
};#include "vector.h"
// vector.cpp - method implementation
void Point::offset(double offsetX, double offsetY) {
 x += offsetX; y += offsetY;
}
void Point::print() {
 cout << "(" << x << "," << y << ")";
}
void Vector::offset(double offsetX, double offsetY) {
 start.offset(offsetX, offsetY);
 end.offset(offsetX, offsetY);
}
void Vector::print() {\\:: indicates which class’ method is being implemented.
 start.print();
 cout << " -> ";
 end.print();
 cout << endl;
}
```
