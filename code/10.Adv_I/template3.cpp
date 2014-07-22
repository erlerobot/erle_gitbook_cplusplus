#include <iostream>
using namespace std;

 template <typename T, int N>
 class ArrayContainer {
 private:
 T elts[N];
 public:
 T set(const int i, const T val) { elts[i] = val; }
 T get(const int i) { return elts[i]; }
 };

 int main() {

  ArrayContainer <int, 5> intac;
  ArrayContainer <float, 10> floatac;
  intac.set(2, 3);
  floatac.set(3, 3.5);
  cout << intac.get(2) << endl;
  cout << floatac.get(3) << endl;
  
 return 0;
 }