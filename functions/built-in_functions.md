## Built-in functions

## Simple examples


For now you know how to calculate 3^4 using for loop, like this example:
```cpp
#include <iostream>
using namespace std;

int main() {
  	int threeExpFour = 1;

 	for (int i = 0; i < 4; i = i + 1){
   		threeExpFour = threeExpFour * 3;
 	}
 	cout << "3^4 is " << threeExpFour << endl;
 	return 0;
}
```
This example shows the result of 3^4.
Now we want to do the same but using functions.That is, define the function `threeExpFour` which calculates the value of 3^4.This is very simple if we use a built-in function: `pow(base,exp)` from the `cmath` library.

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int threeExpFour = pow(3, 4);
  	cout << "3^4 is " << threeExpFour << endl;

	return 0;
}
```

In the `cmath`module you can find many others mathematical functions. [Here](http://www.cplusplus.com/reference/cmath/) you will find a list.

This [link](http://www.cplusplus.com/reference/clibrary/) leads you to the official web site library. Here you can find all the built-in functions.

Finally, [here](http://ww2.cs.mu.oz.au/acmicpc/www.cppreference.com/all_cpp_functions.html) is another list of built-in functions, with use examples for each of them.
