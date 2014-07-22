## Templates

We have seen that functions can take arguments of specific types and have a specific return
type. We now consider templates, which allow us to work with generic types. Through
templates, rather than repeating function code for each new type we wish to accommodate, we
can create functions that are capable of using the same code for different types. For example:
```cpp
 int sum(const int x, const int y) {
 return x + y;
 }
 ```
For this function to work with doubles, it must be modified to the following:
```cpp
 double sum (const double x, const double y) {
 return x + y;
 }
 ```
For a simple function such as this, it may be a small matter to just make the change as shown,
but if the code were much more complicated, copying the entire function for each new type
can quickly become problematic. To overcome this we rewrite sum as a function template.
The format for declaring a function template is:
```cpp
template <class identifier> function_declaration;
```
or
```cpp
template <typename identifier> function_declaration;
```
Both forms are equivalent to one another, regardless of what type identifier ends up being. We
can then use identifier to replace all occurrences of the type we wish to generalize.
So, we rewrite our sum function:
```
 template <typename T>
 T sum(const T a, const T b) {
 return a + b;
 }
 ```
Now, when sum is called, it is called with a particular type, which will replace all Ts in the code.
To invoke a function template, we use:
```cpp
function_name <type> (parameters);
```
Here is an example main function using the above sum function template:
```
 int main() {
 cout << sum<int>(1, 2) << endl;
 cout << sum<float>(1.21, 2.43) << endl;
 return 0;
 }
 ```
This program prints out 3 and 3.64 on separate lines.
So, as you can see, **templates allow us to operate with generic types**.


The identifier can be used in any way inside the function template, as long as the code makes
sense after identifier is replaced with some type.
It is also possible to invoke a function template without giving an explicit type, in cases where
the generic type identifier is used as the type for a parameter for the function. In the above
example, the following would also have been valid:
```cpp
int main() {
 cout << sum(1, 2) << endl;
 cout << sum(1.21, 2.43) << endl;
 return 0;
 }
 ```
Templates can also specify more than one type parameter. For example:
```
#include <iostream>
using namespace std;

template <typename T, typename U>
U sum(const T a, const U b) {
return a + b;
}

int main() {
cout << sum<int, float>(1, 2.5) << endl;

return 0;
}
 ```
This program prints out 3.5. In this case we can also call sum by writing sum(1, 2.5).

Class templates are also possible, in much the same way we have written function templates:
```
 #include <iostream>
 using namespace std;

 template <typename T>
 class Point {
 private:
 T x, y;
 public:
 Point(const T u, const T v) : x(u), y(v) {}
 T getX() { return x; }
 T getY() { return y; }
 };

 int main() {
 Point<float> fpoint(2.5, 3.5);
 cout << fpoint.getX() << ", " << fpoint.getY() << endl;
 return 0;
 }
 ```
The program prints out 2.5, 3.5.

To declare member functions externally, we use the following syntax:
```
template <typename T>
T classname<T>::function_name()
```
So, for example, getX could have been declared in the following way:
```
template <typename T>
T Point<T>::getX() { return x; }
```
assuming a prototype of T getX(); inside the class definition.
We can also define different implementations for a single template by using template
specialization. Consider the following example:

```
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
```
This program prints out 6 and R on separate lines.  Here, the class Container is given two
implementations: a generic one and one specifically tailored to the char type. Notice the
syntax at lines 14 and 15 when declaring a specialization.
Finally, it is possible to parametrize templates on regular types:

```cpp
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
```
This program prints out 3 and 3.5 on separate lines. Here, one instance of the ArrayContainer
class works on a 5-element array of ints whereas the other instance works on a 10-element
array of floats.

Default values can be set for template parameters. For example, the previous template
definition could have been:
```cpp
template <typename T=int, int N=5> class ArrayContainer { ... }
```
and we could have created an ArrayContainer using the default parameters by writing:
```
ArrayContainer<> identifier;
```
