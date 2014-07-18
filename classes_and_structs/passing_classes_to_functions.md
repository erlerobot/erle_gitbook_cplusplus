## Passing classes to functions

Passing by value passes a copy of the class instance
to the function; changes aren’t preserved.
```cpp
class Point { public: double x, y; };
void offsetPoint(Point p, double x, double y) { // does nothing
 p.x += x;
 p.y += y;
}
int main() {
 Point p;
 p.x = 3.0;
 p.y = 4.0;
 offsetPoint(p, 1.0, 2.0); // does nothing
 cout << "(" << p.x << "," << p.y << ")"; // (3.0,4.0)
}
```

When a class instance is passed by reference,
changes are reflected in the original:
```cpp
class Point { public: double x, y; };
void offsetPoint(Point &p, double x, double y) { // works
 p.x += x;
 p.y += y;
}
int main() {
 Point p;
 p.x = 3.0;
 p.y = 4.0;
 offsetPoint(p, 1.0, 2.0); // works
 cout << "(" << p.x << "," << p.y << ")"; // (4.0,6.0)
}
```
