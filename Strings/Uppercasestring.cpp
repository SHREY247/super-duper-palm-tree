//Change string to all uppercase alphabets given string just contains alphabets
#include<iostream>
using namespace std;
int main()
{
	char word[100]= "hElloeveryone";
	for(int i=0;word[i]!='\0';i++)
	{
		if(word[i] > 90)
		{
			word[i]-=32;
		}
	}
	
	for(int i=0;word[i]!='\0';i++)
	{
		cout<<word[i];
		
	}
	
	return 0;	
}
