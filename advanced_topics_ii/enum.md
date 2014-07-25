## enum

In many cases you’ll find that you’ll want to have a variable that represents one of a discrete
set of values. For instance, you might be writing a card game and want to store the suit of
a card, which can only be one of clubs, diamonds, hearts, and spades. One way you might
do this is declaring a bunch of const ints, each of which is an ID for a particular suit. If
you wanted to print the suit name for a particular ID, you might write this:

```cpp
 const int CLUBS = 0, DIAMONDS = 1, HEARTS = 2, SPADES = 3;
 void print_suit ( const int suit ) {
 const char * names [] = {" Clubs ", " Diamonds ",
 " Hearts ", " Spades "};
 return names [ suit ];
 }
 ```
The problem with this is that suit could be integer, not just one of the set of values we
know it should be restricted to. We’d have to check in our function whether suit is too big.
Also, there’s no indication in the code that these const ints are related.
Instead, C++ allows us to use enums. An enum just provides a set of named integer values
which are the only legal values for some new type. For instance:

```cpp
enum suit_t {CLUBS , DIAMONDS , HEARTS , SPADES };
 void print_suit ( const suit_t suit ) {
 const char * names [] = {" Clubs ", " Diamonds ",
 " Hearts ", " Spades "};
 return names [ suit ];
 }
```

Now, it is illegal to pass anything but CLUBS, DIAMODNS, HEARTS, or SPADES into
print suit. However, internally the suit t values are still just integers, and we can use
them as such (as in line 5).
You can specify which integers you want them to be:
```cpp
 enum suit_t { CLUBS =18 , DIAMONDS =91 , HEARTS =241 , SPADES =13};
```
The result is something like this:

```cpp
#include <iostream>

enum suit_t { CLUBS =18 , DIAMONDS =91 , HEARTS =241 , SPADES =13};

void print_suit ( const suit_t suit ) {
 const char * names [] = {" Clubs ", " Diamonds ",
 " Hearts ", " Spades "};
 std::cout << names[suit];
 }

int main(){
 	suit_t card;
 	card=DIAMONDS;
 print_suit(card);

 return 0;
 }
 ```

The following rules are used by default to determine the values of the enum constants:
- The first item defaults to 0.


- Every other item defaults to the previous item plus 1.For instance, by the rule "next enumerator value is previous + 1", the value of "Lexus" enumerator is 46:


```cpp
enum e_acomany {
	Audi=4,
	BMW=5,
	Cadillac=11,
	Ford=44,
	Jaguar=45,
	Lexus,
	Maybach=55,
	RollsRoyce=65,
	Saab=111
};
```

Just like any other type, an enum type such as suit_t can be used for any arguments,
variables, return types, etc.

