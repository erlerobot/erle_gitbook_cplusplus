## Exercises

######Exercise 1

Write a program that adds two inputed numbers.

**Solution:**
```cpp

#include <iostream>
#include <string>
using namespace std;
int main()
{

        int x,y;
        cin>>x;
        cin>>y;
        cout<<x+y;



   return 0;
}
```

######Exercise 2

Write a program that ask for a name and say hello.

**Solution:**
```cpp
#include <iostream>
#include <string>

int main (){

	std::cout << "What's your name?";
	char name[10];
	std::cin >>name ;
	std::cout << "Hello ";
	std::cout<< name;

return 0;
}
```
