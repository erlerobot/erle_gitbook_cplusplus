## virtual Functions

A virtual function or virtual method is a function or method whose behavior can be overridden within an inheriting class by a function with the same signature. This concept is an important part of the polymorphism.

Take the following example:
```
 Car c(" VANITY ", 2003) ;
 Vehicle * vPtr = &c;
 cout << vPtr -> getDesc ();// is the same as cout << *vPtr.getDesc ();
```
(The -> notation on line 3 just dereferences and gets a member. ptr->member is equivalent
to (*ptr).member.)
In the first line, we define an instance of class Car.
Because vPtr is declared as a Vehicle *, this will call the Vehicle version of getDesc, even
though the object pointed to is actually a Car, as Car inherits from Vehicle.

Note:
`*vPtr.getDesc () == vPtr->getDesc ()`
In other words the `->`is equivalent to do an indirection(`*`) and add the dot (`.`) to access a class member.


Usually we’d want the program to select the
correct function at runtime based on which kind of object is pointed to. We can get this
behavior by adding the keyword virtual before the method definition:
```
 class Vehicle {
 ...
 virtual const string getDesc () {...}
 };
 ```
With this definition, the code above would correctly select the Car version of getDesc.
Selecting the correct function at runtime is called dynamic dispatch. This matches the whole
OOP idea – we’re sending a message to the object and letting it figure out for itself what
actions that message actually means it should take.
Because references are implicitly using pointers, the same issues apply to references:
```
Car c(" VANITY ", 2003) ;
Vehicle &v = c;
cout << v. getDesc ();
```
This will only call the Car version of getDesc if getDesc is declared as virtual.
Once a method is declared virtual in some class C, it is virtual in every derived class of C,
even if not explicitly declared as such. However, it is a good idea to declare it as virtual
in the derived classes anyway for clarity.

Arguably, there is no reasonable way to define getDesc for a generic Vehicle – only derived
classes really need a definition of it, since there is no such thing as a generic vehicle that
isn’t also a car, truck, or the like. Still, we do want to require every derived class of Vehicle
to have this function.

We can omit the definition of getDesc from Vehicle by making the function pure virtual
via the following odd syntax:
```
class Vehicle {
 ...
 virtual const string getDesc () = 0; // Pure virtual
 };
 ```
The = 0 indicates that no definition will be given. This implies that one can no longer create
an instance of Vehicle; one can only create instances of Cars, Trucks, and other derived
classes which do implement the getDesc method. Vehicle is then an abstract class – one
which defines only an interface, but doesn’t actually implement it, and therefore cannot be
instantiated.
