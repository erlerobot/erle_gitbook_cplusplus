## Static and const members

######Static members

A class can contain static members, either data or functions.

A static data member of a class is also known as a "class variable", because there is only one common variable for all the objects of that same class, sharing the same value: i.e., its value is not different from one object of this class to another.

For example, it may be used for a variable within a class that can contain a counter with the number of objects of that class that are currently allocated, as in the following example:
```cpp
// static members in classes
#include <iostream>
using namespace std;

class Dummy {
  public:
    static int n;
    Dummy () { n++; };
    ~Dummy () { n--; };
};

int Dummy::n=0;

int main () {
  Dummy a;
  Dummy b[5];
  Dummy * c = new Dummy;
  cout << a.n << '\n';
  delete c;
  cout << Dummy::n << '\n';
  return 0;
}

```

######Const members

When an object of a class is qualified as a const object:

 ```cpp
const MyClass myobject;
```


The access to its data members from outside the class is restricted to read-only, as if all its data members were const for those accessing them from outside the class. Note though, that the constructor is still called and is allowed to initialize and modify these data members:

```cpp
// constructor on const object
#include <iostream>
using namespace std;

class MyClass {
  public:
    int x;
    MyClass(int val) : x(val) {}
    int get() {return x;}
};

int main() {
  const MyClass foo(10);
// foo.x = 20;            // not valid: x cannot be modified
  cout << foo.x << '\n';  // ok: data member x can be read
  return 0;
}
```

Note: If a variable is passed as a const to a function it won't modify it.(See exercise 2)

