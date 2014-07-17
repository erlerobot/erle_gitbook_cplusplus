## Exercises: Functions

######Exercise 1

Write a program that calculates 6^5. Declare your own function to do this.

**Solution:**
```cpp

#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent)
{
 int result = 1;
 for (int i = 0; i < exponent; i = i + 1) {
 result = result * base;
 }
 return result;
}

int main() {

 int sixExpFive = raiseToPower(6, 5);
 cout << "6^5 is " << sixExpFive << endl;

 return 0;
}

```

######Exercise 2

Write a program that ask a name say hello. Use your own function, that recives a string of characters (name) and prints on screen the hello message. (Doesn't returns anything- `void` type)
```
#include<iostream>
using namespace std;



void foo(char* name) {
	cout<< "Hello "<< name<<"\n";
}

int main(){
	cout << "What's your name?";
	char* name1;
	cin >>name1 ;
	foo(name1);
	return 0;
}
```
*Note that you can do the same declaring a unique `name` global varible.*

######Exercise 3

Write a program that ask for two numbers, compare them and show the maximun.Declare a function called `max_two`that compares the numbers and returns the maximun.

**Solution:**
```cpp
#include <iostream>
using namespace std;

int max_two(int a, int b){
	int maxi;
	if (a>b)
	maxi=a;
	else
	maxi=b;
	return maxi;
}

int main(){
	int num1;int num2;int maximun;
	cout<< "Enter first number:";
	cin>> num1;
	cout<< "Enter second number:";
	cin>> num2;
	maximun=max_two(num1,num2);
	cout<< "The maximun of "<< num1 << " and " << num2 << " is: " << maximun <<"\n";

	return 0;
}
```


######Exercise 4
Write a program that asks the user for an integer number and find the sum of all natural numbers upto that number.

**Solution:**

```cpp
#include <iostream>

using namespace std;

int sum_a(int num){
int suma=0;
	for(int i=1;i<=num;i=i+1){

	suma=suma+i;}
	return suma;
}

int main()
{
   int a,sum=0;
   cout<<"Enter a number:";
   cin>>a;
   cout<<sum_a(a);



 }
 ```
