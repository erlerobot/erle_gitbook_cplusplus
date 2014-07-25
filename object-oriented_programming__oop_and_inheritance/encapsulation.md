## Encapsulation


Encapsulation just refers to packaging related stuff together. We’ve already seen how to
package up data and the operations it supports in C++: with classes.

If someone hands us a class, we do not need to know how it actually works to use it; all we
need to know about is its public methods/data – its interface.

Interfaces abstract away the details
of how all the operations are actually performed, allowing the programmer to focus on how
objects will use each other’s interfaces – how they interact.

This is why C++ makes you specify public and private access specifiers: by default, it
assumes that the things you define in a class are internal details which someone using your
code should not have to worry about. The practice of hiding away these details from client
code is called “data hiding,” or making your class a “black box.”

One way to think about what happens in an object-oriented program is that we define what
objects exist and what each one knows, and then the objects send messages to each other
(by calling each other’s methods) to exchange information and tell each other what to do.
