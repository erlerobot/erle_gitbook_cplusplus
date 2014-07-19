## Strings basics

String literals such as "Hello, world!" are actually represented by C++ as a sequence of
characters in memory. In other words, a string is simply a character array and can be
manipulated as such.
Consider the following program:
```cpp
#include <iostream>
using namespace std;

int main() {

char helloworld[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0' };

 cout << helloworld << endl;
return 0;

 }
 ```

This program prints *Hello, world!*. Note that the character array helloworld ends with a
special character known as the **null character**. This character is used to indicate the end of the
string.

Character arrays can also be initialized using string literals. In this case, no null character is
needed, as the compiler will automatically insert one:
```
char helloworld[] = "Hello, world!";
```

The individual characters in a string can be manipulated either directly by the programmer or
by using [special functions provided by the C/C++ libraries](http://www.cplusplus.com/reference/clibrary/). These can be included in a program
through the use of the `#include `directive. Of particular note are the following:

- ` cctype (ctype.h)`: character handling
- ` cstdio (stdio.h)`: input/output operations
- ` cstdlib (stdlib.h)`: general utilities
- `cstring (string.h)`: string manipulation

Here is an example to illustrate the [cctype library](http://www.cplusplus.com/reference/cctype/):
```cpp
#include <iostream>
#include <cctype>

using namespace std;
int main() {

char messyString[] = "t6H0I9s6.iS.999a9.STRING";
char current = messyString[0];

for(int i = 0; current != '\0'; current = messyString[++i]) {

if(isalpha(current))

cout << (char)(isupper(current) ? tolower(current) : current);

else if(ispunct(current))

cout << ' ';

}

cout << endl;

return 0;

}
```
This example uses the `isalpha`, `isupper`, `ispunct`, and `tolowe`r functions from the cctype
library. The `is-` functions check whether a given character is an alphabetic character, an
uppercase letter, or a punctuation character, respectively. These functions return a Boolean
value of either true or false. The `tolower` function converts a given character to lowercase.


The for loop beginning at line 9 takes each successive character from messyString until it
reaches the null character. On each iteration, if the current character is alphabetic and
uppercase, it is converted to lowercase and then displayed. If it is already lowercase it is
simply displayed. If the character is a punctuation mark, a space is displayed. All other
characters are ignored. The resulting output is this is a string. For now, ignore the `(char)`
on line 11; we will cover later.


Here is an example to illustrate the [cstring library](http://www.cplusplus.com/reference/cstring/):
```cpp
#include <iostream>

#include <cstring>

using namespace std;
 int main() {

 char fragment1[] = "I'm a s";

 char fragment2[] = "tring!";

char fragment3[20];

char finalString[20] = "";


strcpy(fragment3, fragment1);

strcat(finalString, fragment3);

strcat(finalString, fragment2);

cout << finalString;

 return 0;

 }


 ```

This example creates and initializes two strings, `fragment1` and `fragment2`. `fragment3` is
declared but not initialized. `finalString` is partially initialized (with just the null character).
`fragment1` is copied into `fragment3` using `strcpy`, in effect initializing `fragment3` to "I'm a s".
`strcat` is then used to concatenate `fragment3` onto `finalString` (the function overwrites the
existing null character), thereby giving `finalString ` the same contents as `fragment3`. Then
`strcat` is used again to concatenate `fragment2` onto `finalString`. `finalString` is displayed,
giving "I'm a string!".
