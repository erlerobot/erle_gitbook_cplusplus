// Exercises: Functions
// Exercise 1

#include <iostream>
using namespace std;

int sum_a(int num)
{
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