## Pointers and arrays

The name of an array is actually a pointer to the ﬁrst element in the array. Writing
`myArray[3]` tells the compiler to return the element that is 3 away from the starting el­ement of myArray.
This explains why arrays are always passed by reference: passing an array is really passing
a pointer.

This also explains why array indices start at 0: the ﬁrst element of an array is the element
that is 0 away from the start of the array

######Pointer arithmetic

pointer arithmetic is a way of using subtraction and addition of pointers to move around
between locations in memory, typically between array elements. Adding an integer n to a
pointer produces a new pointer pointing to n positions further down in memory.

Take the following code snippet:
```cpp

long arr [] = {6 ,0,9,6};
long * ptr = arr ;
ptr ++;
long *ptr2 = arr + 3;
```

When we add 1 to ptr in line 3, we don’t just want to move to the next byte in memory,
since each array element takes up multiple bytes; we want to move to the next element in
the array. The C++ compiler automatically takes care of this, using the appropriate step
size for adding to and subtracting from pointers. Thus, line 3 moves ptr to point to the
second element of the array.

Similarly, we can add/subtracttwo pointers: ptr2 - ptr givesthe number of array elements
between ptr2 and ptr (2). All addition and subtraction operations on pointers use the
appropriate step size.

######Arrays acces notation

Because of the interchangeability of pointers and array names, array-subscript notation (the
form `myArray[3]`) can be used with pointers as well as arrays. When used with pointers, it
is referred to as pointer-subscript notation.

An alternative is pointer-oﬀset notation, in which you explicitly add your oﬀsetto the pointer
and dereference the resulting address. For instance, an alternate and functionally identical
way to express `myArray[3]` is `*(myArray + 3).

######char * Strings

You should now be able to see why the type of a string value is char *: a string is actually
an array of characters. When you set a char * to a string, you are really setting a pointer
to point to the ﬁrst character in the array that holds the string.

You cannot modify string literals; to do so is either a syntax error or a runtime error,
depending on how you try to do it. (String literals are loaded into read-only program memory
at program startup.) You can, however, modify the contents of an array of characters.
Consider the following example:
```cpp
char courseName1[] = {’6 ’, ’. ’, ’0 ’, ’9 ’, ’6 ’, ’\0 ’ };

char *courseName2 = "6.096 ";
```

Attempting to modify one of the elements courseName1 is permitted, but attempting to
modify one of the characters in courseName2 will generate a runtime error, causing the
program to crash.
