## Exercises: Advaced I

######Exercise 1
You have done this exercise before, but now you are ask to do this exercise usinh overloaded operators.
Perform addition operation on complex data using class and object. The program should ask for real and imaginary part of two complex numbers, and display the real and imaginary parts of their sum.

**Solution:**

```cpp
#include <iostream>
using namespace std;

class Imagin{
	public:

	double x,y;
Imagin(){}
	Imagin(double nx, double ny){

	x=nx;y=ny;}
};

Imagin operator+(const Imagin  &num1, const Imagin &num2)
{
 Imagin temp;
temp.x = num1.x + num2.x;
 temp.y = num1.y + num2.y;
    return temp;
}

int main(){
	double nu1,nu2;
	cout << "first number \n";
	cout<< "Enter the real part:";
	cin>> nu1;
	cout<< "Enterthe imaginary part:";
	cin>> nu2;
	Imagin number1(nu1,nu2);
	cout << "second number \n";
    double nu3,nu4;
	cout<< "Enter the real part:";
	cin>> nu3;
	cout<< "Enterthe imaginary part:";
	cin>> nu4;
	Imagin number2(nu3,nu4);

	Imagin result;
	result = number1+number2;
	cout << "The complex sum result is: "<<result.x << " + "<< result.y <<"i \n";

	return 0;
}
```

######Exercise 2
Define a const array and pass it to a reader () function and a modifier () function which cahnger every character for an 'O'.Analyze what happends.

**Solution:**
```cpp
#include <iostream>
using namespace std;



void reader(const char a[6]){
	for(int i=0; i<6; i++)
	cout<< a[i];
}

void modifier(const char b[6]){
	for(int u=0; u<6; u++)
	{b[u]='O';}
}

int main(){

const char arr[6]={'A','p','p','l','e'};

reader (arr);
modifier( arr);

return 0;}
```
######Exercise 3

Define a table that can be filled with both: type integer or float. Use templates.

**Solution:**
```cpp
template <class T>
class Tabla {
  public:
   Tabla(int nElem);
   ~Tabla();
   T& operator[](int indice) { return pT[indice]; }

  private:
   T *pT;
   int nElementos;
};


template <class T>
Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
   pT = new T[nElementos];
}

template <class T>
Tabla<T>::~Tabla() {
   delete[] pT;
}
```


- You can find here more exercise about templates:
http://deekle.net/Jones/FallAndWinter2005-6/COP/14.pdf
