## Allocating Arrays

When allocating arrays on the stack (using
“int arr[SIZE]”), size must be a constant.As commented before, if we use new[] to allocate arrays, they can
have variable size.To de-allocate arrays use delete[].


```cpp
int numItems;
 cout << "how many items?";
 cin >> numItems;
 int *arr = new int[numItems];
 delete[] arr;
 ```

When representing an array, often pass
around both the pointer to the first element
and the number of elements.Let's see an example:


```cpp
class IntegerArray {
public:
 int *data;
 int size;
};
int main() {
 IntegerArray arr;
 arr.size = 2;
 arr.data = new int[arr.size];//This can be moved to a consructor.
 arr.data[0] = 4; arr.data[1] = 5;
 delete[] a.data;//This can be moved to a destructor.
}
```
Including the constructor/destructor idea:

```cpp
class IntegerArray {
public:
 int *data;
 int size;
 IntegerArray(int size) {
 data = new int[size];
 this->size = size;
 }
 ~IntegerArray () {
 delete[] data;
 }
};

};
int main() {
IntegerArray arr(2);
 arr.data[0] = 4; arr.data[1] = 5;

}
```
