## Converting between const and non-const

You can always provide a non-const value where a const one was expected. For instance,
you can pass non-const variables to a function that takes a const argument. The const-ness
of the argument just means the function promises not to change it, whether or not you require
that promise. The other direction can be a problem: you cannot provide a const reference
or pointer where a non-const one was expected. Setting a non-const pointer/reference to a
const one would violate the latter’s requirement that it not be changeable. The following,
for instance, does not work:
```
int g; // Global variable
 const int & getG () { return g; }

 // ... Somewhere in main
 int & gRef = getG ();
 ```
This fails because gRef is a non-const reference, yet we are trying to set it to a const
reference (the reference returned by getG).
In short, the compiler will not let you convert a const value into a non-const value unless
you’re just making a copy (which leaves the original const value safe).


For simple values like ints, the concept of const variables is simple: a const int can’t
be modified. It gets a little more complicated when we start talking about const objects.
Clearly, no fields on a const object should be modifiable, but what methods should be
available? It turns out that the compiler can’t always tell for itself which methods are safe
to call on const objects, so it assumes by default that none are. To signal that a method is
safe to call on a const object, you must put the const keyword at the end of its signature,
e.g. int getX() const;. const methods that return pointers/references to internal class
data should always return const pointers/references.
