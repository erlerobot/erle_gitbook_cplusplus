#include <iostream>
using namespace std;

int main() {
  int threeExpFour = 1;
 
 for (int i = 0; i < 4; i = i + 1) {
   threeExpFour = threeExpFour * 3;
 }
 
 cout << "3^4 is " << threeExpFour << endl;
 

 return 0;
}