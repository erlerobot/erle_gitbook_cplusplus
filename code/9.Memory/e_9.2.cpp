// Exercises: Memory
// Exercise 2

#include <iostream>
using namespace std;

int main(){
 int numItems;
 int num;
 cout << "how many items?";
 cin >> numItems;
 int *arr = new int[numItems];
 cout << "Enter "<< numItems << " items:";
 for(int u=0;u<numItems;u++){
   cin>>num;
   arr[u]=num;
 }

 delete[] arr;
 return 0;
}