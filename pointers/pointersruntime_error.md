## Pointers:Runtime Error

Some pointers do not point to valid data; dereferencing such a pointer is a runtime error.

Any pointerset to 0 is called a null pointer, and since there is no memory location 0, it is an
*invalid pointer*. One should generally check whether a pointer is null before dereferencing it.
Pointers are often set to 0 to signal that they are not currently valid.
Dereferencing pointers(*unlocated pointers*) to data that has been erased from memory also usually causes runtime
errors. Example:
```cpp
 int * myFunc () {
 int phantom = 4;
 return & phantom ;
}
```
phantom is deallocated when myFunc exits, so the pointer the function returns is invalid.
As with any other variable, the value of a pointer is *undeﬁned* until it is initialized, so it
may be invalid.
