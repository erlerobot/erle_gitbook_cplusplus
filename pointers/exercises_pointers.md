## Exercises: Pointers

######Exercise 1

Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

**Solution:**
```
#include <iostream>

using namespace std;

int main()
{
    int  a; int b;
	cout << "Enter value of A: ";
	cin >> a;
	cout << "Enter value of B: ";
	cin >> b;

	int *ptrA=&a;
	int *ptrB=&b;
    cout << "Value of ptrA is " << *ptrA << " sored in address "<< ptrA<<"\n";
	cout << "Value of ptrB is " << *ptrB <<" sored in address "<< ptrB<<"\n";

	return 0;
}
```

######Exercise 2
Write a C++ program to find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. The program prints on screen a pointer that points to the max value.

**Solution:**
```cpp
#include<iostream>
using namespace std;



int main(){
int n;int i; int max=0;
  cout<<"Enter number of values:";
  cin>>n;
  cout<<"Enter values in array:\n";
  int arr[n];
  for(i=0;i<n;i++)     {

   cin>>arr[i];
}




  for(int u=0;u<=n;u++)
  {
  if (arr[u]>max)
  max=arr[u];
  }

  int *pointer= &max;


  cout<<"Largest integer value in the array is "<<*pointer;

  return 0;
}
```

######Exercise 3

Take input in variable and display same value by pointer.

**Solution:**
```cpp
#include <iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter number:";
   cin>>a;
   int *b=&a;


    cout<< " The pointer values is "<< *b << " the memory address is: "<<  b;
}
```

######Exercise 4

Given the string "A string." Print on one line the letter on the index 0, the pointer position and the letter t.
undate the pointer to pointer +2.
Then, in another line print the pointer and the letters r and g of the string (using the pointer).

**Solution:**
```cpp
#include <iostream>
using namespace std;

int main(void) {
char str[] = "A string.";
char *pc = str;

cout << str[0] <<' '<< *pc <<' '<<pc[3]<<"\n";
pc += 2;
cout <<*pc<<' '<< pc[2] <<' '<< pc[5];

 return 0;
}
```
