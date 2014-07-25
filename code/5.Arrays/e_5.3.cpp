// Exercises: Arrays
// Exercise 3

#include <iostream>
using namespace std;


int main(){

	char buffer[10];
	char reversedbuffer[10];
	cout<<"Enter a string to be reversed :"<<endl;
	cin>>buffer;

	for(int i=0; i<= 10;i++){
	 reversedbuffer[i]=buffer[10-i];
	 }


	cout<<"reversed string :";

	for(int u=0;u<=10;u++){
	  cout<<reversedbuffer[u];
	  }

	cout <<"\n"

    return 0;
}