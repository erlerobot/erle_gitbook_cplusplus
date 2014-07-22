#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i = i + 1) {
		result = result * base;
		}
	return result;
}

int main() {
	int threeExpFour = raiseToPower(3, 4);
	cout << "3^4 is " << threeExpFour << endl;
	
	return 0;
}