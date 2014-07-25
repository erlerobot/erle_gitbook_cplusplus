// Exercises: Pointers
// Exercise 2

#include<iostream>
using namespace std;



int main(){

  int n;int i; int max=0;
  cout<<"Enter number of values:";
  cin>>n;

  cout<<"Enter values in array:\n";
  int arr[n];
  for(i=0;i<n;i++) {

   cin>>arr[i];
  }


  for(int u=0;u<=n;u++){
   if (arr[u]>max)
     max=arr[u];
  }

  int *pointer= &max;


  cout<<"Largest integer value in the array is "<<*pointer;

  return 0;
}