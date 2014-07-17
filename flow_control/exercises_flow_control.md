## Exercises: Flow Control

######Exercise 1
Write a program that checks if the angles given can make a triangle or not (their sum must be 180 degrees).

**Solution:**
```cpp
#include <iostream>

using namespace std;
int main()
{
	int angle1,angle2,angle3,sum;
	cout<<"Enter the three angles of triangle:";
	cin>>angle1>>angle2>>angle3;
    sum=angle1+angle2+angle3;
    if (sum==180)
     cout<< "It is a triangle";
    else
     cout << "This is not a triangle";

	return 0;
}
```
######Exercise 2
Write a program that prints on the screen all the even numbers up to 10.

**Solution:**
```
#include <iostream>

using namespace std;

int main()
{
  for(int x=0;x<=10;x=x+2)
  {cout<< x;
 cout <<	"\n";
  }

  return 0;
  }
  ```

######Exercise 3

Initialize y=0 and x=6. Then write the appropiate staments to print * x is greater than y * on one line and then *x is equal to 6* on the
next line.
Do this using if statement.
**Solution:**


```cpp
 #include <iostream>

 using namespace std;



 int main() {

 int x = 6;
 int y = 0;


 if(x > y) {

 cout << "x is greater than y\n";

 if(x == 6)

 cout << "x is equal to 6\n";

 else

 cout << "x is not equalt to 6\n";

 } else

 cout << "x is not greater than y\n";


 return 0;
 }

```
######Exercise 4

Write a program that tells you if a number is even or odd.

**Solution:**
```cpp
#include <iostream>

using namespace std;
int main()
{
   int n;
   cout<<"Enter the number:\n";
   cin>>n;
    if (n%2==0)
    cout<<"EVEN";
    else
    cout<<"ODD";

	return 0;

}
```
