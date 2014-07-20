## Standard Template Library

Part of the C++ Standard Library, [the Standard Template Library (STL)](http://www.cplusplus.com/reference/stl/) contains many useful
container classes and [algorithms](http://www.cplusplus.com/reference/algorithm/). As you might imagine, these various parts of the library are
written using templates and so are generic in type. The containers found in the STL are lists,
maps, queues, sets, stacks, and vectors. The algorithms include sequence operations, sorts,
searches, merges, heap operations, and min/max operations. We will explore how to use some
of these through example here:
```cpp
 #include <iostream>
 #include <set>
#include <algorithm>
using namespace std;


int main() {
set<int> iset;
iset.insert(5);
iset.insert(9);
iset.insert(1);
iset.insert(8);
iset.insert(3);

cout << "iset contains:";
set<int>::iterator it;
for(it=iset.begin(); it != iset.end(); it++)
cout << " " << *it;
cout << endl;

int searchFor;
cin >> searchFor;
if(binary_search(iset.begin(), iset.end(), searchFor))
cout << "Found " << searchFor << endl;
else

cout << "Did not find " << searchFor << endl;
return 0; }
```
In this example, we create an integer set and insert several integers into it. We then create an
iterator corresponding to the set at lines 14 and 15. An iterator is basically a pointer that
provides a view of the set. (Most of the other containers also provide iterators.) By using this
iterator, we display all the elements in the set and print out iset contains: 1 3 5 8 9. Note
that the set automatically sorts its own items. Finally, we ask the user for an integer, search
for that integer in the set, and display the result.


Here is another example:
```cpp
 #include <iostream>
 #include <algorithm>
 using namespace std;

 void printArray(const int arr[], const int len) {
 for(int i=0; i < len; i++)
 cout << " " << arr[i];
 cout << endl;
 }

 int main() {
int a[] = {5, 7, 2, 1, 4, 3, 6};

sort(a, a+7);
 printArray(a, 7);
rotate(a,a+3,a+7);
printArray(a, 7);
 reverse(a, a+7);
 printArray(a, 7);

 return 0; }
 ```
This program prints out:
```
1 2 3 4 5 6 7
4 5 6 7 1 2 3
3 2 1 7 6 5 4
```
