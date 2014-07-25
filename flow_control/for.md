## for

The for loop works like the while loop but with some change in syntax:
```
for(initialization; condition; incrementation)

{

statement1

statement2

…

}
```
The for loop is designed to allow a counter variable that is initialized at the beginning of the
loop and incremented (or decremented) on each iteration of the loop. Curly braces may be
omitted if there is only one statement. Here is an example:
```
#include <iostream>

using namespace std;



 int main() {



  for(int x = 0; x < 10; x = x + 1)

   cout << x << "\n";


return 0;

 }
``
This program will print out the values 0 through 9, each on its own line.
If the counter variable is already defined, there is no need to define a new one in the
initialization portion of the for loop. Therefore, it is valid to have the following:
```cpp
 #include <iostream>

using namespace std;



 int main() {



    int x = 0;

    for(; x < 10; x = x + 1)

        cout << x << "\n";



    return 0;

 }
 ```

Note that the first semicolon inside the for loop's parentheses is still required.
A for loop can be expressed as a while loop and vice-versa. Recalling that a for loop has the
form
```cpp
for(initialization; condition; incrementation)

{

statement1

statement2

…

}
```

we can write an equivalent while loop as
initialization
```
while(condition)

{

statement1

statement2

…

incrementation

}
```

Using our example above,
```
#include <iostream>

using namespace std;



int main() {

for(int x = 0; x < 10; x = x + 1)

   cout << x << "\n";

return 0;

}
```
is converted to

```cpp
#include <iostream>

using namespace std;

int main() {

  int x = 0;

  while(x < 10){

      cout << x << "\n";

      x = x + 1;

     }

  return 0;

 }
 ```
The incrementation step can technically be anywhere inside the statement block, but it is good
practice to place it as the last step, particularly if the previous statements use the current
value of the counter variable.

