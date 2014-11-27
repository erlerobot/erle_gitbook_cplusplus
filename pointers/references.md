## References

When we write void f(int &x) {...} and call f(y), the reference variable x becomes another name – an alias – for the value of y in memory. We can declare a reference variable
locally, as well:
```cpp
int y;

int &x = y; // Makes x a reference to, or alias of, y
```
After these declarations, changing x will change y and vice versa, because they are two names for the same thing.

References are just pointers that are dereferenced every time they are used. Just like point­ers, you can pass them around, return them, set other references to them, etc. The only differences between using pointers and using references are:

-	 References are sort of pre-dereferenced – you do not dereference them explicitly.


-	 You cannot change the location to which a reference points, whereas you can change
the location to which a pointer points. Because of this, references must always be
initialized when they are declared.


-	 When writing the value that you want to make a reference to, you do not put an &
before it to take its address, whereas you do need to do this for pointers.


We will talk about this topic later, in classes chapter.
