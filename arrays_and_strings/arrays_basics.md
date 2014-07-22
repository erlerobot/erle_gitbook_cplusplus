## Arrays basics

######Unidimensional arrays

An array is a fixed number of elements of the same type stored sequentially in memory.
Therefore, an integer array holds some number of integers, a character array holds some
number of characters, and so on. The size of the array is referred to as its dimension. To
declare an array in C++, we write the following:
```
type arrayName[dimension];
```
example:
```cpp
int arr[4];
```

The elements of an array can be accessed by using an index into the array. Arrays in C++ are
zero-indexed, so **the first element has an index of 0**. So, to access the third element in arr, we
write `arr[2]; The value returned can then be used just like any other integer.

Like normal variables, the elements of an array must be initialized before they can be used;
otherwise we will almost certainly get unexpected results in our program. There are several
ways to initialize the array. One way is to declare the array and then initialize some or all of
the elements:
```cpp
int arr[4];

arr[0] = 6;

arr[1] = 0;

arr[2] = 9;

arr[3] = 6;
```
Another way is to initialize some or all of the values at the time of declaration:
```cpp
int arr[4] = { 6, 0, 9, 6 };
```

Sometimes it is more convenient to leave out the size of the array and **let the compiler
determine the array's size** for us, based on how many elements we give it:
```cpp
int arr[] = { 6, 0, 9, 6, 2, 0, 1, 1 };
```

Here, the compiler will create an integer array of dimension 8.

The array can also be initialized with values that are not known beforehand:

```cpp
 #include <iostream>
 using namespace std;

 int main() {

   int arr[4];

   cout << "Please enter 4 integers:" << endl;

   for(int i = 0; i < 4; i++)
      cin >> arr[i];\\Fill in the array

   cout << "Values in array are now:";

   for(int i = 0; i < 4; i++)
      cout << " " << arr[i];\\ Show the content of the array

   cout << endl;

return 0;
}
```
Note that when accessing an array the index given must be a positive integer from 0 to n-1,
where n is the dimension of the array. The index itself may be directly provided, derived from a
variable, or computed from an expression:
```cpp
arr[5];

arr[i];

arr[i+3];
```

Arrays can also be passed as arguments to functions. When declaring the function, simply
specify the array as a parameter, without a dimension. The array can then be used as normal
within the function. For example:
```cpp
#include <iostream>
using namespace std;


 int sum(const int array[], const int length) {
  long sum = 0;
  for(int i = 0; i < length; sum += array[i++]);
  return sum;
  }

 int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  cout << "Sum: " << sum(arr, 7) << endl;


  return 0;

  }
```

The function `su`m takes a constant integer array and a constant integer length as its arguments
and adds up length elements in the array. It then returns the `sum`, and the program prints out
`Sum: 28. `

It is important to note that arrays are passed by reference and so any changes made to the
array within the function will be observed in the calling scope.

######Multidimensional arrays

C++ also supports the creation of multidimensional arrays, through the addition of more than
one set of brackets. Thus, a two-dimensional array may be created by the following:
```
type arrayName[dimension1][dimension2];
```

The array will have dimension1 x dimension2 elements of the same type and can be thought of
as an array of arrays. The first index indicates which of dimension1 subarrays to access, and
then the second index accesses one of dimension2 elements within that subarray. Initialization
and access thus work similarly to the one-dimensional case:

```cpp
#include <iostream>
using namespace std;

int main() {

 int twoDimArray[2][4];

 twoDimArray[0][0] = 6;

 twoDimArray[0][1] = 0;

 twoDimArray[0][2] = 9;

 twoDimArray[0][3] = 6;

 twoDimArray[1][0] = 2;

 twoDimArray[1][1] = 0;

 twoDimArray[1][2] = 1;

 twoDimArray[1][3] = 1;

for(int i = 0; i < 2; i++)

 for(int j = 0; j < 4; j++)

  cout << twoDimArray[i][j];
  cout << endl;


 return 0;

 }

```


The array can also be initialized at declaration in the following ways:
```cpp
int twoDimArray[2][4] = { 6, 0, 9, 6, 2, 0, 1, 1 };

int twoDimArray[2][4] = { { 6, 0, 9, 6 } , { 2, 0, 1, 1 } };
```

Note that **dimensions must always be provided** when initializing multidimensional arrays, as it
is otherwise impossible for the compiler to determine what the intended element partitioning
is. For the same reason, when multidimensional arrays are specified as arguments to
functions, all dimensions but the first must be provided (the first dimension is optional), as in
the following:
```
int aFunction(int arr[][4]) { … }
```

Multidimensional arrays are merely an abstraction for programmers, as all of the elements in
the array are sequential in memory. Declaring `int arr[2][4];` is the same thing as declaring
`int arr[8];`.

