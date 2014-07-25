## Access Modifiers

Acces Modifiers define where your fields/methods can be accessed from.

- Fields marked as `public` can be accessed by anyone.

- Fields marked as `private` can only be accessed by functions that are part of that class.


Classes are `private` by default, this means that:
```cpp
class Point {
 double x, y;
};
```
is the same as:
```cpp
class Point {
private:
 double x, y;
};
```

Now, let's analyze this example:
```cpp
class Robot {
  public:
    float getX() { return locX; }
    float getY() { return locY; }
    float getFacing() { return facing; }
    void setFacing(float f) { facing = f; }
    void setLocation(float x, float y);
  private:
    float locX;
    float locY;
    float facing;
};
```
Here is eveidenced that you can use getters to allow read-only access to private fields.


With `protected`, C++ allows users to create classes based on other classes:
- For example: FordCar class based on a general Car class.


- The general Car class has fields (variables and functions that describe all cars).
The FordCar class then uses the fields from the general Car class and adds fields specific to FordCars
done with inheritance.
Public fields are inherited (as public) and
private fields are not inherited.
protected fields are like private, but can be inherited.
