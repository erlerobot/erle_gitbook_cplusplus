#include <iostream>
using namespace std;

// pass-by-value

void increment(int a) {
 a = a + 1;
 cout << "a in increment " << a << endl;
}

int main() {
 int q = 3;
 increment(q); // does nothing
 cout << "q in main " << q << endl;
}