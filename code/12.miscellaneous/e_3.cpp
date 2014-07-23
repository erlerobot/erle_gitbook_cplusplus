// Exercises: miscellaneous
//Exercise 3

#include <iostream>
using namespace std;

int calculate_sum(int nu){
	int count=0;
	for(int i=0;i<=nu;i++){
	    if (i%2!=0)
			count=count +i;}
			return count;
}

int main(){
    int num;
	cout << "Enter the limit number:\n";
	cin>> num;
    int total;
    total=calculate_sum(num);
	cout << "\n\n The sum result is: "<< total;

	return 0; 
	}
