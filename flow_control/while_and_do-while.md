## while and do-while

The while loop has a form similar to the if conditional:
```cpp
while(condition){

	statement1

	statement2

	…
}
```

As long as condition holds, the block of statements will be repeatedly executed. If there is only
one statement, the curly braces may be omitted. Here is an example:
```cpp
#include <iostream>

using namespace std;

int main() {
    int x = 0;

    while(x < 10){
      x = x + 1;
      cout << "x is " << x << "\n";
    }
	return 0;
}
```
This program will print x is 10.
The do-while loop is a variation that guarantees the block of statements will be executed at
least once:
```cpp
do{

	statement1

	statement2

	…

}while(condition);
```

The block of statements is executed and then, if the condition holds, the program returns to
the top of the block. Curly braces are always required. Also note the semicolon after the while
condition.
