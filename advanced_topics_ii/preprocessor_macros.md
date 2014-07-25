## Preprocessor Macros

We’ve seen how to define constants using the preprocessor command #define. We can also
define macros, small snippets of code that depend on arguments. For instance, we can write:
```cpp
 # define sum (x, y) (x + y)
 ```
Now, every time sum(a, b) appears in the code, for any arguments a and b, it will be
replaced with (a + b).
Macros are like small functions that are not type-checked; they are implemented by simple
textual substitution. Because they are not type-checked, they are considered less robust
than functions.
