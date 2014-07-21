## File handling

File handling in C++ works almost identically to terminal input/output. To use files, you
write `#include <fstream>` at the top of your source file. Then you can access two classes
from the std namespace:
- `ifstream` : allows reading input from files
- `ofstream` : allows outputting to files

Each open file is represented by a separate ifstream or an ofstream object. You can use
ifstream objects in excatly the same way as cin and ofstream objects in the same way as
cout, except that you need to declare new objects and specify what files to open.
For example:
```cpp
#include <fstream>
 using namespace std ;

 int main () {
 ifstream source (" source - file . txt ");
 ofstream destination ("dest - file . txt ");
 int x;
 source >> x; // Reads one int from source - file . txt
 source . close (); // close file as soon as we ’re done using it
destination << x; // Writes x to dest - file . txt
 return 0;
 } // close () called on destination by its destructor
```
As an alternative to passing the filename to the constructor, you can use an existing ifstream
or ofstream object to open a file by calling the open method on it: `source.open("other-file.txt");`.
Remember to close your files using the `close()` method when you’re done using them.

You can specify a second argument to the constructor or the open method to specify what
“mode” you want to access the file in – read-only, overwrite, write by appending, etc. Check
documentation online for details.
