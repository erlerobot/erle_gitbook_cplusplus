// Exercises: Functions
// Exercise 1

#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent){
 int result = 1;
 for (int i = 0; i < exponent; i = i + 1){
   result = result * base;
   }
 return result;
}

int main() {

 int sixExpFive = raiseToPower(6, 5);
 cout << "6^5 is " << sixExpFive << endl;

 return 0;
}