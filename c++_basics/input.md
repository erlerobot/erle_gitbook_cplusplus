## Input

Now that we know how to give names to values, we can have the user of the program input
values. This is demonstrated in line 6 below:
```cpp
#include<iostream>
#include <string>
 using namespace std;

 int main () {
 int x ;
 cin >> x ;

 cout << x / 3 << ’ ’ << x * 2;

 return 0;
 }
 ```
Just as `cout <<` is the syntax for outputting values, `cin >>` (line 6) is the syntax for inputting
values.
