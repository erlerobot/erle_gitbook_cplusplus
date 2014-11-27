## Returning multile values

The return statement only allows you to
return 1 value. Passing output variables by
reference overcomes this limitation.
For example:
```cpp
#include <iostream>
using namespace std;

int divide(int numerator, int denominator, int &remainder)
{
	remainder = numerator % denominator;
	return numerator / denominator;
	}

int main() {
	int num = 14;
	int den = 4;
	int rem;

	int result = divide(num, den, rem);

	cout << result << "*" << den << "+" << rem << "=" << num << endl;
	//The print on the screen is: 3*4+2=12
}
```

Here we obtain the cotient=`numerator/denominator` stored in the result value.(The cotient is the return of the function divide) We also obtain the value of the remainder, which has been passed by reference, that means its value in the main program has been updated when passed to the function.
