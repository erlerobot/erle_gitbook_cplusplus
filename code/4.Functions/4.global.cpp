#include <iostream>

int numCalls = 0;

void foo() {
 ++numCalls;
}

int main() {
 foo(); foo(); foo();
 std::cout << numCalls << endl; // 3

 return 0;
}