## Exceptions

Sometimes functions encounter errors that make it impossible to continue normally. For
instance, a getFirst function that was called on an empty Array object would have no
reasonable course of action, since there is no first element to return.

A functions can signal such an error to its caller by throwing an exception. This causes the
function to exit immediately with no return value. The calling function has the opportunity
to catch the exception – to specify how it should be handled. If it does not do so, it exits
immediately as well, the exception passes up to the next function, and so on up the call
stack (the chain of function calls that got us to the exception).

An example:
```cpp
 const int DIV_BY_0 = 0;
 int divide ( const int x, const int y) {
 if(y == 0)
 throw DIV_BY_0 ;
 return x / y;
 }

 void f( int x, int ** arrPtr ) {
 try {
 * arrPtr = new int [ divide (5, x)];
 } catch ( int error ) {
 // cerr is like cout but for error messages
 cerr << " Caught error : " << error ;
 }
 // ... Some other code ...
 }
 ```
The code in main is executing a function (divide) that might throw an exception. In
anticipation, the potentially problematic code is wrapped in a try block. If an exception
is thrown from divide, divide immediately exits, passing control back to main. Next, the
exception’s type is checked against the type specified in the catch block (line 11). If it
matches (as it does in this case), the code in the catch block is executed; otherwise, f will
exit as well as though it had thrown the exception. The exception will then be passed up to
f’s caller to see if it has a catch block defined for the exception’s type.

You can have an arbitrary number of catch blocks after a try block:
```cpp

int divide ( const int x, const int y) {
if(y == 0)
throw std :: runtime_exception (" Divide
return x / y;
by 0!");
}

 void f( int x, int ** arrPtr ) {
 try {
 * arrPtr = new int [ divide (5, x)];
 }
 catch ( bad_alloc & error ) {// new throws exceptions  this type.
cerr << " new failed to allocate memory ";
 }
 catch ( runtime_exception & error ) {
 // cerr is like cout but for error messages
 cerr << " Caught error : " << error . what ();
 }
 // ...
}
```
In such a case, the exception’s type is checked against each of the catch blocks’ argument
types in the order specified. If line 2 causes an exception, the program will first check
whether the exception is a bad alloc object. Failing that, it checks whether it was a
runtime exception object. If the exception is neither, the function exits and the exception
continues propagating up the call stack.
The destructors of all local variables in a function are called before the function exits due to
an exception.

Exception usage notes:
- Though C++ allows us to throw values of any type, typically we throw exception
objects. Most exception classes inherit from class std::exception in header file
`<stdexcept>`.


- The standard exception classes all have a constructor taking a string that describes the
problem. That description can be accessed by calling the what method on an exception
object.


- You should always use references when specifying the type a catch block should match
(as in lines 11 and 14). This prevents excessive copying and allows virtual functions to
be executed properly on the exception object.
