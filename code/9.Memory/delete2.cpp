#include <iostream>
using namestapce std;

int *getPtrToFive() {
 int *x = new int;
 *x = 5;
 return x;
}

int main() {
 int *p;
 for (int i = 0; i < 3; ++i) {
  p = getPtrToFive();
  cout << *p << endl;
  delete p;
 }

 return 0;
}