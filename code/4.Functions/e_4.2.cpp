\\Exercises: Functions
\\Exercise 2

#include<iostream>
using namespace std;



void foo(char* name) {
	cout<< "Hello "<< name<<"\n";
}

int main(){
	cout << "What's your name?";
	char* name1;
	cin >>name1 ;
	foo(name1);

	
	return 0;
}

\\ Note that you can do the same declaring a unique `name` global varible.