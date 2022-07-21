//Copy a string
#include<iostream>
using namespace std;
int main()
{	
int i;
	char linea[100]="Hello World";
	char lineb[100];
	for(i=0;linea[i]!='\0';i++)
	{
		lineb[i] = linea[i]; 
	}
	
	lineb[i]=='\0';						//Making the last character of our string NULL
	
	cout<<lineb;
	return 0;
}
