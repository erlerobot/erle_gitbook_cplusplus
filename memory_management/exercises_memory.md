## Exercises: Memory

######Exercise 1
Given the following code add a destructor for Foo class.
```cpp
#include <iostream>

class Foo {
public:
    Foo( void )
    { std::cout << "Foo constructor 1 called" << std::endl; }


int main( )
{
    Foo foo_1;
    return 0;
}
```

**Solution:**
```cpp
#include <iostream>

class Foo {
public:
     Foo( void )
    { std::cout << "Foo constructor 1 called" << std::endl; }
    ~Foo( void )
    { std::cout << "Foo destructor called" << std::endl; }
}
int main( int argc, char **argv )
{
    Foo foo();
    ~Foo foo();
    return 0;
}
```
######Exercise 2
Write  program that ask for the numbers of elements in an array and then fill it in. Use new and delete.
**Solution:**
```cpp

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
```
######Exercise 4

Write a program containing a constructor and a destructor for an array.The body shuld be :
```cpp
int main() {
 IntegerArray a(2);//This call the constructor
 a.data[0] = 4; a.data[1] = 2;
 if (true) {
 IntegerArray b = a;
 }
 cout << a.data[0] << endl; // The result is 4
}
```
Note: Pass the data to the data_construtor by reference.

**Solution:**

```cpp
class IntegerArray {
public:
 int *data; int size;
 IntegerArray(int size) {
 data = new int[size];
 this->size = size;
 }
IntegerArray(IntegerArray &o) {
 data = new int[o.size];
 size = o.size;
 for (int i = 0; i < size; ++i)
 data[i] = o.data[i];
 }
 ~IntegerArray() {
 delete[] data;
 }
};
int main() {
 IntegerArray a(2);
 a.data[0] = 4; a.data[1] = 2;
 if (true) {
 IntegerArray b = a;
 }
 cout << a.data[0] << endl;
}
```
