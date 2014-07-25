## Line-By-Line Explanation

- `// `indicates that everything following it until the end of the line is a comment: it is
ignored by the compiler. Another way to write a comment is to put it between `/* `and
`*/` (e.g. x = 1 + /*sneaky comment here*/ 1;). A comment of this form may span
multiple lines. Comments exist to explain non-obvious things going on in the code.


- Lines beginning with `# `are preprocessor commands, which usually change what code
is actually being compiled. `#include` tells the preprocessor to dump in the contents of
another ﬁle, for example `#include <stdio.h>.


- `int main() {...} `deﬁnes the code that should execute when the program starts up.
The curly braces represent grouping of multiple commands into a block.


-  `cout <<` : This is the syntax for outputting some piece of text to the screen.


- *Namespaces*: In C++, identiﬁers can be deﬁned within a context – sort of a
directory of names – called a namespace. When we want to access an identiﬁer
deﬁned in a namespace, we tell the compiler to look for it in that namespace using
the scope resolution operator (::). Here, we’re telling the compiler to look for
cout in the std namespace, in which many standard C++ identiﬁers are deﬁned.
A cleaner alternative is to add the following line below line 2:
```cpp
using namespace std ;```

This line tells the compiler that it should look in the std namespace for any
identiﬁer we haven’t deﬁned. If we do this, we can omit the std:: preﬁx when
writing cout. This is the recommended practice.

- *Strings*: A sequence of characters such as Hello, world is known as a string. A
string that is speciﬁed explicitly in a program is a string literal.


- *Escape sequences*: The `\n indicates a newline character. It is an example of an
escape sequence – a symbol used to represent a special character in a text literal.
Here are all the C++ escape sequences which you can include in strings:

|**Escape Sequence**| **Represented Character**|
|---|---|
|\a| System bell (beep sound) |
|\b| Backspace |
|\f |Formfeed (page break) |
|\n |Newline (line break)|
|\r |“Carriage return” (returns cursor to start of line) |
|\t |Tab |
|\\ |Backslash |
|\’ |Single quote character |
|\"| Double quote character |
|\some integer x| The character represented by x|

-` return 0` indicates that the program should tell the operating system it has completed
successfully. This syntax will be explained in the context of functions; for now, just
include it as the last line in the main block.

**Note** that every statement ends with a semicolon (except preprocessor commands and blocks
using {}).
