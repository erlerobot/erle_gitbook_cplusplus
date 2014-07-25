## Reading strings

You’ll likely find that you want to read some text input from the user. We’ve so far seen
only how to do ints, chars, etc.
It’s usually easiest to manage text using the C++ string class. You can read in a string
from cin like other variables:
```cpp
 string mobileCarrier ;
 cin >> mobileCarrier ;
 ```
However, this method only reads up to the first whitespace; it stops at any tab, space,
newline, etc. If you want to read multiple words, you can use the getline function, which
reads everything up until the user presses enter:
```
 string sentence ;
 getline (cin , sentence );
 ```
