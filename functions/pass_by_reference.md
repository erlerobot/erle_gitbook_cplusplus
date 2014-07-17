## Pass by reference

So far we’ve been passing everything by value –
makes a copy of the variable; changes to the variable
within the function don’t occur outside the function .
For example:

```cpp
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
```
The result of this program is:
```
a in increment 4
q in main 3
```
As you can see the original variable has not been modified.
If you want to modify the original variable as
opposed to making a copy, pass the variable by
reference (`int &a` instead of `int a`).
```cpp
//pass by-reference
void increment(int &a) {
 a = a + 1;
 cout << "a in increment " << a << endl;
}

int main() {
 int q = 3;
 increment(q); // works
 cout << "q in main " << q << endl;
}
```
The output is:
```
a in increment 4
q in main 4
```
As you can see the q value (in the main program) has been updated too.
