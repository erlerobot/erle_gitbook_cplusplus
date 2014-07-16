## Variables

We might want to give a value a name so we can refer to it later. We do this using variables.
A variable is a named location in memory.
For example, say we wanted to use the value 4 + 2 multiple times. We might call it x and
use it as follows:
```cpp

 #include <iostream>
 #include <string>
 using namespace std ;

 int main () {
 int x ;
 x = 4 + 2;
 cout << x / 3 << ’ ’ << x * 2;

 return 0;
 }
 ```
(Note how we can print a sequence of values by “chaining” the << symbol.)
The name of a variable is an identiﬁer token. Identiﬁers may contain numbers, letters, and
underscores (_), and may not start with a number.
Line 5 is the declaration of the variable x. We must tell the compiler what type x will be
so that it knows how much memory to reserve for it and what kinds of operations may be
performed on it.
Line 6 is the initialization of x, where we specify an initial value for it. This introduces a
new operator: =, the assignment operator. We can also change the value of x later on in the
code using this operator.
We could replace lines 5 and 6 with a single statement that does both declaration and
initialization:
int x = 4 + 2;

This form of declaration/initialization is cleaner, so it is to be preferred.
