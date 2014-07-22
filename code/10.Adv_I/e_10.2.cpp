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

return 0;
}