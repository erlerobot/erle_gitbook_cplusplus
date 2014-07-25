## Passing by reference

References are perfectly valid types, just like pointers. For instance, just like `int *` is the
“pointer to an integer” type, int & is the “reference to an integer” type. References can be
passed as arguments to functions, returned from functions, and otherwise manipulated just
like any other type.

References are just pointers internally; when you declare a reference variable, a pointer to the
value being referenced is created, and it’s just dereferenced each time the reference variable
is used.

The syntax for setting a reference variable to become an alias for another variable is just like
regular assignment:
```cpp
 int &x = y; // x and y are now two names for the same variable
 ```
Similarly, when we want to pass arguments to a function using references, we just call the
function with the arguments as usual, and put the & in the function definiton, where the
argument variables are being set to the arguments actually passed:
```cpp
 void sq( int &x) { // & is part of the type of x
 // - x is an int reference
 x *= x;
 }
 sq(y);
 ```
Note that on the last line, where we specify what variable x will be a reference to, we just
write the name of that variable; we don’t need to take an address with & here.
References can also be returned from functions, as in this contrived example:
```cpp
int g; // Global variable
int & getG () { // Return type is int reference
 return g; // As before , the value we ’re making a
 // reference *to* doesn ’t get an & in front of it
 }

 // ... Somewhere in main
int & gRef = getG (); // gRef is now an alias for g
gRef = 7; // Modifies g
 ```
 If you’re writing a class method that needs to return some internal object, it’s often best to
return it by reference, since that avoids copying over the entire object. You could also then
use your method to do something like:
```cpp
vector <Card > & cardList= deck . getList (); // getList declared to return a reference
 cardList . pop_back ();
 ```
The second line here modifies the original list in deck, because cardList was declared as a
reference and getList returns a reference.
