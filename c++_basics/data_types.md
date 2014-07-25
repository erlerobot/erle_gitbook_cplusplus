## Data Types

Every expression has a type – a formal description of what kind of data its value is. For
instance, 0 is an integer, 3.142 is a ﬂoating-point (decimal) number, and "Hello, world!\n"
 is a string value (a sequence of characters).

 Data of diﬀerent types take a diﬀerent amounts
of memory to store. Here are the built-in datatypes we will use most often:


|**Type Names**| **Description**| **Size**| **Range**|
|--------|----------------------------|---------|-----------------|
|char| Single text character or small integer.Indicated with single quotes (’a’, ’3’).| 1 byte| signed: -128 to 127 unsigned: 0 to 255 |
|int| Larger integer.| 4 bytes| signed: -2147483648 to 2147483647 unsigned: 0 to 4294967295 |
|bool |Boolean (true/false). Indi­cated with the keywords true and false.| 1 byte| Just true (1) or false (0). |
|double |“Doubly” precise ﬂoating point number. |8 bytes| +/- 1.7e +/- 308 ( 15 digits) |


Notes on this table:

- A signed integer is one that can represent a negative number; an unsigned integer will
never be interpreted as negative, so it can represent a wider range of positive numbers.
Most compilers assume signed if unspeciﬁed.


- There are actually 3 integer types: short, int, and long, in non-decreasing order of
size (int is usually a synonym for one of the other two). You generally don’t need to
worry about which kind to use unless you’re worried about memory usage or you’re
using really huge numbers. The same goes for the 3 ﬂoating point types, float, double,
and long double, which are in non-decreasing order of precision (there is usually some
imprecision in representing real numbers on a computer).


- The sizes/ranges for each type are not fully standardized; those shown above are the
ones used on most 32-bit computers.
An operation can only be performed on compatible types. You can add 34 and 3, but you
can’t take the remainder of an integer and a ﬂoating-point number.

An operator also normally produces a value of the same type as its operands; thus, 1 / 4
evaluates to 0 because with two integer operands, / truncates the result to an integer. To
get 0.25, you’d need to write something like 1 / 4.0.
A text string,  has the type char *.
