// Exercises: miscellaneous
//Exercise 4

#include <iostream>
#include <string>
#include <algorithm>

std::string remove_letter_easy( std::string str, char c )
{
    str.erase( std::remove( str.begin(), str.end(), c ), str.end() ) ;
    return str ;
}

std::string remove_letter( std::string str, char c )
{
    for( auto iter = str.begin() ; iter != str.end() ; )
    {
        if( *iter == c ) iter = str.erase(iter) ;
        else ++iter ;
    }
    return str ;
}

int main()
{
    const std::string txt;
    std::cout << "\n Enter the string:\n"
    std::cin>> txt ;

    std::cout << "\n the input string is : "<< txt << '\n' ;
    char letter;
    std:: cout <<"\n \n Enter the letter you want to delete:\n";
    std:: cin >> letter;
    std::cout << remove_letter_easy( txt,  letter ) << '\n' ;
    std::cout << remove_letter( txt, letter ) << '\n' ;
}