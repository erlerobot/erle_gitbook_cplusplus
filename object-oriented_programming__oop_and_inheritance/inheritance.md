## Inheritance

Inheritance allows us to define hierarchies of related classes.

Imagine we’re writing an inventory program for vehicles, including cars and trucks. We could
write one class for representing cars and an unrelated one for representing trucks, but we’d
have to duplicate the functionality that all vehicles have in common. Instead, C++ allows
us to specify the common code in a Vehicle class, and then specify that the Car and Truck
classes share this code.

```cpp
class Vehicle {
protected :
string license ;
int year ;


 public :
 Vehicle ( const string & myLicense , const int myYear )
 : license ( myLicense ), year ( myYear ) {}
  const string getDesc () const
  { return license + " from " + stringify ( year );}
const string & getLicense () const { return license ;}
const int getYear () const { return year ;}
};
```

A few notes on this code, by line:


As we have seen protected is largely equivalent to private, bu tit is used when we want to crean classes based on classes.

Line 8 demonstrates member initializer syntax. When defining a constructor, you
sometimes want to initialize certain members, particularly const members, even before
the constructor body. You simply put a colon before the function body, followed by a
comma-separated list of items of the form dataMember(initialValue).

Line 10 assumes the existence of some function stringify for converting numbers to
strings.

Now we want to specify that Car will inherit the Vehicle code, but with some additions.
This is accomplished in line 1 below:
```cpp
class Car : public Vehicle { // Makes Car inherit from Vehicle
 string style ;

 public :
 Car( const string & myLicense , const int myYear , const string
& myStyle )
 : Vehicle ( myLicense , myYear ), style ( myStyle ) {}
 const string & getStyle () { return style ;}
 };
```

Now class Car has all the data members and methods of Vehicle, as well as a style data
member and a getStyle method.
Class Car inherits from class Vehicle. This is equivalent to saying that Car is a derived
class, while Vehicle is its base class. You may also hear the terms subclass and superclass
instead.
Notes on the code:


Note how we use member initializer syntax to call the base-class constructor. We need
to have a complete Vehicle object constructed before we construct the components
added in the Car. If you do not explicitly call a base-class constructor using this syntax,
the default base-class constructor will be called.


There are two ways we could describe some class A as depending on some other class B:

- Every A object has a B object. For instance, every Vehicle has a string object (called
license).


- Every instance of A is a B instance. For instance, every Car is a Vehicle, as well.

Inheritance allows us to define “is-a” relationships, but it should not be used to implement
“has-a” relationships. It would be a design error to make Vehicle inherit from string
because every Vehicle has a license; a Vehicle is not a string. “Has-a” relationships
should be implemented by declaring data members, not by inheritance.

We might want to generate the description for Cars in a different way from generic Vehicles.
To accomplish this, we can simply redefine the getDesc method in Car, as below. Then,
when we call getDesc on a Car object, it will use the redefined function. Redefining in this
manner is called overriding the function.
```cpp
class Car : public
string style ;

public :
Car( const string & myLicense , const int myYear , const string
& myStyle )
: Vehicle ( myLicense , myYear ), style ( myStyle ) {}

const string getDesc () // Overriding this member function
{ return stringify ( year ) + ' ' + style + ": " + license
;}
const string & getStyle () { return style ;}
 };
```
