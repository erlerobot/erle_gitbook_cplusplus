// File: ArrayDebug.cpp
// Driver for Array ADT. 
// Debugging Demo - show how r-value is created, and some examples
//	to distinguish r-values and l-values, along with constructor use
//	in the debugger

#include <iostream>
#include "Array.h"

// Change argument to & to see change in debugging
int doubleVal(int a)
{	return(a*2);
}

// Why can Array one be passed here? 
void add1(Array a)
{for (int i=0;i<a.getSize();i++)
	a[i]=a[i]+1;
}

// Passing the object by reference. Can only pass changeable Array
void add2(Array &a)
{for (int i=0;i<a.getSize();i++)
	a[i]=a[i]+2;
}

// Try exchanging headers. Why doesn't it compile? Hard!
Array add3(Array a)
// Array add3(const Array &a)
{for (int i=0;i<a.getSize();i++)
	a[i]=a[i]+3;
 return(a);
}

int main(){
Array const one(3);
 int n;
 n=one[0]+one[1];
 if (10<2*one[1]-5)
	 cout << one[2];
 cout << "One:" << one;
 Array two=one;
 two[1]=doubleVal(two[2]);
 two[0]=43;
 two[2]=56;
 cout << "Two:" << two;
 Array three;
 three=two;
 add1(one);
 cout << "One:" << one;
 // add2(one);
 add2(two);
 cout << "Two:" << two;
 // Next line changes values in one in the function. Why is this OK?
 three=add3(one);
 cout << "Three:" << three;
 return(0);
}
