## The new operator

Dynamic memory is allocated using operator new. new is followed by a data type specifier and, if a sequence of more than one element is required, the number of these within brackets []. It returns a pointer to the beginning of the new block of memory allocated. That is, another way to allocate memory, where the
memory will remain allocated until you
manually de-allocate it.
```cpp
int *x = new int;
```

If using int x; the allocation occurs on a region of
memory called the stack.
If using new int; the allocation occurs on a region
of memory called the heap.
For example:
```cpp
int * foo;
foo = new int [5];
``

In this case, the system dynamically allocates space for five elements of type int and returns a pointer to the first element of the sequence, which is assigned to foo (a pointer). Therefore, foo now points to a valid block of memory with space for five elements of type int.

New can also be used to allocate a class instance:
```cpp
class Point {
public:
 int x, y;
 Point(int nx, int ny) {
 x = ny; x = ny; cout << "2-arg constructor" << endl;
 }
};

int main() {
 Point *p = new Point;
delete p;
}
```

Destructor is called when the class instance gets
de-allocated:
```cpp
class Point {
public:
 int x, y;
Point() {
 cout << "constructor invoked" << endl;
 }
 ~Point() {
 cout << "destructor invoked" << endl;
 }
}
```

