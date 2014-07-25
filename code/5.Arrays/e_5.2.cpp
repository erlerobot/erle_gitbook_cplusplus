// Exercises: Arrays
// Exercise 2

#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void relocate_print(int in, int array[6], int nu){
	for(int u=6; u>in;u=u-1){
	 array[u]=array[u-1];
	 }

	array[in]=nu;

	for(int i=0; i<=6; i++){
	 cout << array[i]<<"\n";
	 }
	return;
}


int main(){
	int num;int index;
	cout<< "Enter a number:";
	cin>>num;
	cout<<"Enter index:";
	cin>>index;
	
    relocate_print(index,arr,num);


	return 0;

}