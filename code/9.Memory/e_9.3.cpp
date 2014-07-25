// Exercises: Memory
// Exercise 3


#include <iostream>
using namespace std;

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