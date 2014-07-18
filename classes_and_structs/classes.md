## Classes


A user-defined datatype which groups
together related pieces of information is a class.
In other words, classes are types representing groups of similar instances; each instance has certain fields that define it (*instance variables*).
Instances also have functions that can be applied to them (represented as function fields and called *methods*).Also offers the possibility to the programmer to limit access to parts of the class (to only those functions that need to know about the internals).

Let's see an example:*Representing a (Geometric) Vector*.

- In the context of geometry, a
vector consists of 2 points: a
start and a finish.
- Each point itself has an x and y
coordinate.
- Our representation will use
4 doubles (startx, starty, endx,
endy).
- We need to pass all 4 doubles
to functions.

![vector](./vector.jpg)

So for now if we want to define the vector and print it we will do something  like this.

```cpp
#include <iostream>
using namespace std;



void printVector(double x0, double x1, double y0, double y1) {
 cout << "(" << x0 << "," << y0 << ") -> ("
 << x1 << "," << y1 << ")" << endl;
}


int main() {
 double xStart = 1.2;
 double xEnd = 2.0;
 double yStart = 0.4;
 double yEnd = 1.6;

printVector(xStart,xEnd,yStart,yEnd);

return 0;}
```

Now we are going to define a vector as a class:

```cpp

class Vector {
public:
 double xStart;
 double xEnd;
 double yStart;
 double yEnd;
};

```

So with this, we can see the syntaxis of a class:
````
class ClassName {
  access_modifier1:
    field11_definition;
    field12_definition;
    …
  access_modifer2:
    field21_definition;
    field22_definition;
  …
};
```
*ClassName* is a new type.(In the example above Vector).
The possible *access modifiers* are: public,private and protected.
*Fields* indicate what related pieces of
information our datatype consists of
(They are also called members).
Fields can be variables or functions and can have different types.
```cpp

class MITStudent {
public:
 char *name;
 int studentID;
};

```





