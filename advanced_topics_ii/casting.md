## Casting

Casting is the process of converting a value between types. All C++-style casts are of the form cast `type<type>(value)`, where type is the type you’re
casting to. The possible cast types to replace cast type with are:

- `static cast` : This is by far the most commonly used cast. It creates a simple copy
of the value of the specified type. Example:
```cpp
static cast<float>(x)
```
where x is an
int, gives a float copy of x.

- `dynamic_cas`t can only be used with pointers and references to classes (or with void*). Its purpose is to ensure that the result of the type conversion points to a valid complete object of the destination pointer type.`dynamic cast` can also be used with references: if v is a Vehicle & variable, dynamic cast
`<Car &>(v)` will return a valid reference if v is actually a reference to a Car, and will
throw a bad cast exception otherwise.



- `reinterpret cast` :Does no conversion; just treats the memory containing value as
though it were of type type.



- `const cast`: Used for changing const modifiers of a value. You can use this to tell the
compiler that you really do know what you’re doing and should be allowed to modify
a const variable. You could also use it to add a const modifier to an object so you can
force use of the const version of a member function.
