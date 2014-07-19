## The delete operator

In most cases, memory allocated dynamically is only needed during specific periods of time within a program; once it is no longer needed, it can be freed so that the memory becomes available again for other requests of dynamic memory.That is, de-allocates memory that was previously allocated using new.The delete operatot takes a pointer to the memory location.

The syntaxis is the following:
```cpp
delete pointer;
delete[] pointer;
```

The first statement releases the memory of a single element allocated using new, and the second one releases the memory allocated for arrays of elements using new and a size in brackets ([]).

The value passed as argument to delete shall be either a pointer to a memory block previously allocated with new, or a null pointer (in the case of a null pointer, delete produces no effect).

Let's see one example step by step:
We are going to implement a function which returns a pointer
to some memory containing the integer 5.
- Allocate memory using new to ensure it remains
allocated.
```cpp
int *getPtrToFive() {
 int *x = new int;
 *x = 5;
 return x;
}
```
- When done, de-allocate the memory using delete.
```cpp
int *getPtrToFive() {
 int *x = new int;
 *x = 5;
 return x;
}
int main() {
 int *p = getPtrToFive();
cout << *p << endl; // 5
delete p;
}
```
If you don’t use de-allocate memory using
delete, your application will waste memory.When your program allocates memory but is
unable to de-allocate it, this is a memory leak.

So the final searched result is:
``cpp
#include <iostream>
using namestapce std;

int *getPtrToFive() {
 int *x = new int;
 *x = 5;
 return x;
}
int main() {
 int *p;
for (int i = 0; i < 3; ++i) {
 p = getPtrToFive();
 cout << *p << endl;
 delete p;
 }
}
```
Note that to fix the memory leak, de-allocate memory
within the loop.
Remember to only delete if memory was allocated
by new.
