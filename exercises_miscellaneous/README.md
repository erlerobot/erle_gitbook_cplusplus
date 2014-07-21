# Exercises: miscellaneous

######Exercise 1
Write a program that asks for txo 3x3 Matrix.Then the porgram sums the matrix and stores the result in the first one(A=A+B).Then prints on the screen the resulting matrix.

**Solution:**
```cpp
#include <stdio.h>

const int dim=100;
int i,j,fil,col;
float MatA[3][3],MatB[3][3];

int main(void)
{




    printf("\n\nEnter the first matrix:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nInsert the element (%i,%i): ",i,j); scanf("%f", &MatA[i][j]);
        }
    }

    printf("\n\n\nEnter the second matrix:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nInsert the element (%i,%i): ",i,j); scanf("%f", &MatB[i][j]);
        }
    }

    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) MatA[i][j]=MatA[i][j]+MatB[i][j]; // The result is stored in matrix A
    }

    printf("\n\nThe result of the sum is:\n\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) printf("%10f",MatA[i][j]);
        printf("\n");
    }
    return 0;
}
```

######Exercise 2
Write a program that takes input array daily temperatures, as floats. and findout the maximum and minimum values.

**Solution:**
```cpp
#include<iostream>
using namespace std;

double maximun(double arr[], int len){
	double max=-100;
for(int i=0;i<len;i++){
	if (max>arr[i])
		max=arr[i];
}
return max;
}

double minimun(double arr1[], int len1){
	double min=100;
for(int u=0;u<len1;u++){
	if (min>arr1[u])
		min=arr1[u];
}
return min;
}

int main(){
int length;
cout <<"How many temperatures would you like to add?\n";
cin >>length;
double array[length];
cout<<"\n\n Enter the temperatures:\n";
for(int p=0;p<length;p++){
	cin>>array[p];
}
double maxT,minT;
maxT= maximun(array, length);
minT=minimun(array,length);

cout << "\n\n The max. temperature of the day is: "<< max;
cout <<"\n The min. temperature of the day is :"<< min;
return 0;
}
```

######Exercise 3
Write a program which calculates the sum of all odd numbers upto a particular limit.
The limit will be an input to the program.


**Solution:**
```cpp
#include<iostream>
using namespace std;

int calculate_sum(int nu){
	int count=0;
	for(int i=0;i<=nu;i++)
		{if (i%2!=0)
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

return 0;}
```


######Exercise 4

Write a program which takes input a string and a character then remove this character in this string.

**Solution:**
```cpp
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
```

######Exercise 5

Write a program that clasifies angle: acute, straight and obtuse.

**Solution:**
```cpp
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
````
######Exercise 6

Write a program that input a number and calculates its factorial.(use a function called factorial).

**Solution:**
```cpp
#include <iostream>
using namespace std;
int factorial(int nu){
	int fac=1;
	for (int u=1;u<=nu; u++){
		fac=fac*u;
	}
	return fac;
}

int main(){
	int num;
	cout << "\n \n Please, enter a number:\n";
	cin >>num;

	cout <<"\n \n the factorial number is: " <<factorial(num);

}
```
