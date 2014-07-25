// Exercises: Pointers
// Exercise 3

#include <iostream>
using namespace std;

int main(){

   int a;
   cout<<"Enter number:";
   cin>>a;
   int *b=&a;


    cout<< " The pointer values is "<< *b << " the memory address is: "<<  b;

    return 0;
}