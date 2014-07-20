## Overloading operators

Classes, essentially, define new types to be used in C++ code. And types in C++ not only interact with code by means of constructions and assignments. They also interact by means of operators.
For now, we have been using operators on primitives, but sometimes it makes sense to use them on
user-defined datatypes. For example, take the following operation on fundamental types:
```cpp
int a, b, c;
a = b + c;
```
Here, different variables of a fundamental type (int) are applied the addition operator, and then the assignment operator. For a fundamental arithmetic type, the meaning of such operations is generally obvious and unambiguous, but it may not be so for certain class types. For example:
```cpp
struct myclass {
  string product;
  float price;
} a, b, c;
a = b + c;
```



Here, it is not obvious what the result of the addition operation on b and c does. In fact, this code alone would cause a compilation error, since the type myclass has no defined behavior for additions. However, C++ allows most operators to be overloaded so that their behavior can be defined for just about any type, including classes.Operators are overloaded by means of operator functions, which are regular functions with special names: their name begins by the operator keyword followed by the operator sign that is overloaded. The syntax is:
```cpp

type operator sign (parameters) { /*... body ...*/ }
```
Let's analyze a pair of example. First,
the addition operation of two cartesian vectors is defined as the addition both x coordinates together, and both y coordinates together. For example, adding the cartesian vectors (3,1) and (1,2) together would result in (3+1,1+2) = (4,3). This could be implemented in C++ with the following code:

```cpp
// overloading operators example
#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {}
    CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}

int main () {
  CVector foo (3,1);
  CVector bar (1,2);
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << '\n';
  return 0;
}
```
Secondly, consider the following example, starting with this struct:
```cpp
struct USCurrency {
int dollars;
int cents;
};
```
Perhaps we would like to add two USCurrency objects together and get a new one as a result,
just like in normal addition:
```cpp
USCurrency a = {2, 50};
USCurrency b = {1, 75};
USCurrency c = a + b;
```
This of course gives a compiler error, but we can define behavior that our datatype should have
when used with the addition operator by overloading the addition operator. This can be done
either inside the class as part of its definition (the addition from the point of view of the object
on the left side of the +):

```cpp
 USCurrency operator+(const USCurrency o) {
 USCurrency tmp = {0, 0};
 tmp.cents = cents + o.cents;
 tmp.dollars = dollars + o.dollars;
 if(tmp.cents >= 100) {
 tmp.dollars += 1;
 tmp.cents -= 100;
 }
 return tmp;
}
```
or outside the class as a function independent of the class (the addition from the point of view
of the +):
```cpp
USCurrency operator+(const USCurrency m, const USCurrency o) {
USCurrency tmp = {0, 0};
tmp.cents = m.cents + o.cents;
tmp.dollars = m.dollars + o.dollars;

if(tmp.cents >= 100) {
tmp.dollars += 1;
tmp.cents -= 100;
}
 return tmp;
}
```
Similarly, we can overload the << operator to display the result:
```cpp
 ostream& operator<<(ostream &output, const USCurrency
 output << "$" << o.dollars << "." << o.cents;
 return output;
 }
 ```
Assuming the above definitions, we can run the following program:
```cpp
int main() {
USCurrency a = {2, 50};
USCurrency b = {1, 75};
USCurrency c = a + b;
cout << c << endl;
return 0;
}
```
and get the printout $4.25.
The list of overloadable operators:
```
+ - * / += -= *= /= % %= ++ --
= == < > <= >= ! != && ||
<< >> <<= >>= & ^ | &= ^= |= ~
[] () , ->* -> new new[] delete delete[]
```
