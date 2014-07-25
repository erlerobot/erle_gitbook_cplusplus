// Exercises: miscellaneous
//Exercise 5

#include <iostream>
using namespace std;

void angle_w(double ang){
	if (ang <90)
		cout << "\n This is an acute angle.";
	else if (ang == 90)
		cout << " \n This is a straight angle.";
	else
		cout << " \n This is a obtuse angle.";
}

int main(){
	double angle;
	cout << "Enter an angle:\n";
	cin >> angle;
	while ((angle-360)>0)
		{angle=angle -180;}

	angle_w(angle);
	}
