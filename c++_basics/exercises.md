## Exercises:Basics

######Exercise 1

Write a program that adds two inputed numbers.

**Solution:**
```cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{

        int x,y;
        cin>>x;
        cin>>y;
        cout<<x+y;



   return 0;
}
```

######Exercise 2

Write a program that ask for a name and say hello.

**Solution:**
```cpp
#include <iostream>
#include <string>

int main (){

	std::cout << "What's your name?";
	char name[10];
	std::cin >>name ;
	std::cout << "Hello ";
	std::cout<< name;

return 0;
}
```
*This exercise is an example of not using `using namespace std ;`.*
######Exercise 3

Write a program that evaluates the following things for two int numbers:

Sum,Diff,Product,Quotient,Remainder,Increment first num., Decrement Second num. in num3 =0.

**Solution:**
```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int num1,num2,sum,diff,product,quotient,remainder,num3=0;
   cout<<"Enter 1st number: ";
   cin>>num1;
   cout<<"Enter 2nd number: ";
   cin>>num2;

	sum =num1+num2;
	diff=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	remainder=num1%num2;
	num1=num1+num3;
	num2=num2+num3;

  cout<<"" << sum;
  cout<<"\n" << diff;
  cout<<"\n" << product;
  cout<<"\n" << quotient;
  cout<<"\n" << remainder;
   cout<<"\n" << num1;
   cout<<"\n" << num2;
   cout<<"\n" << num3;
 return 0;

}

```


