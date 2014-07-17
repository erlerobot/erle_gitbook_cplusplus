## Exercises: Arrays

######Exercise 1
Create an array that can hold ten integers, and get input from user. Display those values on the screen, and then prompt the user for an integer. Search through the array, and count the number of times the item is found.
**Solution:**
```cpp
#include <iostream>
using namespace std;

int count(const int arr1[10], int numb)
{int cont=0;

	for (int u=0; u<10; u++)
{if (arr1[u]==numb)
cont=cont+1;}
return cont;
}

int main()
{   int arr[10];int num;
    cout<<"Enter 10 values in array:";

     for(int i = 0; i < 10; i++)
     cin >> arr[i];
    cout << "Values in array are now:";

     for(int i = 0; i < 10; i++)
     cout << " " << arr[i];

     cout<<"\n"<< "Enter value to find";
        cin >> num;
	cout<< num<< " was found " << count(arr,num);
	return 0;
}


```


######Exercise 2

Write a program that asks for an index and a number.
Then it includes the number at the indicated index of the array ={1,2,3,4,5,6} and moves a position forward (from u to u+1) each element after the selected index.

**Solution:**
```cpp
#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void relocate_print(int in, int array[6], int nu){
	for(int u=6; u>in;u=u-1)
	{array[u]=array[u-1];
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
```

######Exercise 3
Write a program that reverses a string and prints it on the screen.

**Solution:**
```cpp
#include <iostream>
using namespace std;


 int main()
{
	char buffer[10];
	char reversedbuffer[10];
	cout<<"Enter a string to be reversed :"<<endl;
	cin>>buffer;

	for(int i=0; i<= 10;i++)

	{reversedbuffer[i]=buffer[10-i];}




	cout<<"reversed string :";
	for(int u=0;u<=10;u++)
		{cout<<reversedbuffer[u];}
	cout <<"\n"

return 0;}
```
