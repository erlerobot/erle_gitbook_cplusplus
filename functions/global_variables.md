## Global Variables

They are vaiables that can be accessed from any function. For example, how many times is function foo() called?
```cpp
int numCalls = 0;

void foo() {
 ++numCalls;
}

int main() {
 foo(); foo(); foo();
 cout << numCalls << endl; // 3
}
```
`numCalls` is a global variable. Where a
variable was declared,
determines where it
can be accessed from.
