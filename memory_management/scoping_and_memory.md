## Scoping and Memory

As we have seen previously, whenever we declare a new variable (int x), memory is allocated.
But, when can this memory be freed up (so it can
be used to store other variables)?The answer is simply, when the variable goes out of scope.

When a variable goes out of scope, that
memory is no longer guaranteed to store the
variable’s value.

Let's analyze an example:

```cpp
#include<iostream>
using namespace std;

int main() {

 if (true) {
  int x = 5;
  }
 // x now out of scope, memory it used to occupy can be reused
}
```
Now, p will become a dangling pointer (points to
memory whose contents are undefined):
```cpp
#include<iostream>
using namespace std;

int main() {

 int *p;
 if (true) {
  int x = 5;
  p = &x;
  }
 cout << *p << endl; // ???
}
```

So, taking this in to account, think about implementing a function which returns a pointer
to some memory containing the integer 5.You may think about doing it like this:

```cpp
#include<iostream>
using namespace std;

int* getPtrToFive() {
 int x = 5;
 return &x;
}

int main() {
 int *p = getPtrToFive();
 cout << *p << endl; // ???
}
```
This is an incorrect implementation, why?:
– x is declared in the function scope.

– As `getPtrToFive()` returns, x goes out of scope. So a dangling pointer is returned.



