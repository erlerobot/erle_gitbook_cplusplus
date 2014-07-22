#include <iostream>
#include <cctype>
using namespace std;

 template <typename T>
 class Container {
 private:
 T elt;
 public:
 Container(const T arg) : elt(arg) {}
T inc() { return elt+1; }
 };

 template <>
 class Container <char> {
 private:
 char elt;
 public:
 Container(const char arg) : elt(arg) {}
 char uppercase() { return toupper(elt); }
 };

 int main() {
 
   Container<int> icont(5);
   Container<char> ccont('r');
   cout << icont.inc() << endl;
   cout << ccont.uppercase() << endl;

   return 0;
 }