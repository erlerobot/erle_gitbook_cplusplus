## Pointers usage/syntaxis

 ######Declaring Pointers
To declare a pointer variable named `ptr` that points to an integer variable named x:
```cpp
int *ptr = &x;
```

`int *ptr` declares the pointer to an integer value, which we are initializing to the address of x.

We can have pointers to values of any type. The general scheme for declaring pointers is:
```cpp
data_type *pointer_name; // Add "= initial_value " if applicable
```
Pointer name is then a variable of type data type * – a "pointer to a data type value."

######Using Pointer Values

Once a pointer is declared, we can dereference it with the * operator to access its value:
```cpp
cout << *ptr;
// Prints the value pointed to by ptr.

// which in the above example would be x’s value
```

We can use deferenced pointers as l-values:
```cpp
*ptr = 5; // Sets the value of x
```
Without the * operator, the identiﬁer x refers to the pointer itself, not the value it points
to:
```
cout << ptr; // Outputs the memory address of x in base 16
```
Just like any other data type, we can pass pointers as arguments to functions. The same
way we’d say void func(int x) {...}, we can say void func(int *x){...}. Here is an
example of using pointers to square a number in a similar fashion to pass-by-reference:

```cpp

void squareByPtr ( int * numPtr ) {
* numPtr = * numPtr * * numPtr ;
 }

 int main () {
 int x = 5;
 squareByPtr (& x);
 cout << x; // Prints 25
 }
 ```

Note that in line 2 * has different uses.

######const Pointer

There are two places the `const` keyword can be placed within a pointer variable declaration.
This is because there are two diﬀerent variables whose values you might want to forbid
changing: the pointer itself and the value it points to.
```cpp
const int *ptr;
```

declares a changeable pointer to a constant integer. The integer value cannot be changed
through this pointer, but the pointer may be changed to point to a diﬀerent constant integer.
```
int * const ptr;
```
declares a constant pointer to changeable integer data. The integer value can be changed
through this pointer, but the pointer may not be changed to point to a diﬀerent constant
integer.
```
const int * const ptr;
```
forbids changing either the address ptr contains or the value it points to.
