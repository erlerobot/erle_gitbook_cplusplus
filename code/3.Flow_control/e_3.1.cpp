// Exercises:Flow Control
// Exercise 1

#include <iostream>

using namespace std;
int main()
{
	int angle1,angle2,angle3,sum;

	cout<<"Enter the three angles of triangle:";
	cin>>angle1>>angle2>>angle3;

    sum=angle1+angle2+angle3;
    if (sum==180)
      cout<< "It is a triangle";
    else
      cout << "This is not a triangle";

	return 0;
}