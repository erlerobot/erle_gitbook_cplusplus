## switch-case

The switch-case is another conditional structure that may or may not execute certain
statements. However, the switch-case has peculiar syntax and behavior:
```cpp
switch(expression){
  case constant1:

    statementA1

    statementA2

    ...

    break;

  case constant2:

    statementB1

    statementB2

    ...

    break;

  ...

  default:

    statementZ1

    statementZ2

    ...

}
```

The switch evaluates expression and, if expression is equal to constant1, then the
statements beneath case constant 1: are executed until a break is encountered. If
expression is not equal to constant1, then it is compared to constant2. If these are equal,
then the statements beneath case constant 2: are executed until a break is encountered. If
not, then the same process repeats for each of the constants, in turn. If none of the constants
match, then the statements beneath default: are executed.
Due to the peculiar behavior of switch-cases, curly braces are not necessary for cases where
there is more than one statement (but they are necessary to enclose the entire switch-case).
switch-cases generally have if-else equivalents but can often be a cleaner way of
expressing the same behavior.
Here is an example using switch-case:
```cpp
 #include <iostream>

using namespace std;

int main() {


 int x = 6;

 switch(x){
   case 1:
     cout << "x is 1\n";
     break;
   case 2:
   case 3:
     cout << "x is 2 or 3";
     break;
   default:
     cout << "x is not 1, 2, or 3";
  }

return 0;
}
```
This program will print x is not 1, 2, or 3. If we replace line 5 with int x = 2; then the
program will print x is 2 or 3.
