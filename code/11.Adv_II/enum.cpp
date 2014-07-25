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