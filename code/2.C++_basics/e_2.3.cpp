\\Exercise: basics
\\Exercise 3
#include <iostream>

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
