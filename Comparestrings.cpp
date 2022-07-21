//Comparing 2 strings
#include<iostream>
using namespace std;
int main()
{	
	int i = 0;
	char linea[100];
	char lineb[100];
	cout<<"Enter 2 strings\n";
	cin>>linea>>lineb;
	
	while(linea[i]!='\0' && lineb[i]!='\0')
	{
		if(linea[i] != lineb[i])
		break;
		
		i++;
	}
	
	if(linea[i] == '\0' && lineb[i] == '\0')
	{
		cout<<"Yes, both the strings are same\n"; 
	}
	
	else
	cout<<"Strings are not same\n";
	
	return 0;	
}
