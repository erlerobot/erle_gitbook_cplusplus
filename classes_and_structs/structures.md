## Structures

Structs are a carry-over from the C; in C++,
classes are generally used.
In C++, they're essentially the same as classes,
except structs' default access modifier is public.

Class example:
```cpp
class Point {
public:
 double x;
 double y;
};
```
Struct example:

```cpp
struct Point {
 double x;
 double y;
};
```
In C++ struct and class can be used interchangeably to create a class with one exception:
- struct: public by default.
- class: private by default.
