## Constructors

Manually initializing your fields can get tedious.Can we initialize them when we create an
instance?

A constructor is a method that is called when an instance is created.

```cpp
class Point {
public:
 double x, y;
 Point() {
 x = 0.0; y = 0.0; cout << "Point instance created" << endl;
 }
};

int main() {
 Point p; // Point instance created
         // p.x is 0.0, p.y is 0.0
}
```
When using constructors you also can use parameters:
```cpp
class Point {
public:
 double x, y;
 Point(double nx, double ny) {
 x = nx; y = ny; cout << "2-parameter constructor" << endl;
 }
};

int main() {
 Point p(2.0, 3.0); // 2-parameter constructor
                   // p.x is 2.0, p.y is 3.0
}
```

You can also use multiple constructors.You can, also, recall that assigning one class instance to another
copies all fields (default copy constructor):
```cpp
Point q(1.0, 2.0); // 2-parameter constructor
Point r = q;// r.x is 1.0, r.y is 2.0)
```
Sometimes it is desirable to define your own copy constructor:
```cpp
Point(Point &o) {
 x = o.x; y = o.y; cout << "custom copy constructor" << endl;
 }
 ```
