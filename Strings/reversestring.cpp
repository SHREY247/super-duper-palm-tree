//To reverse the string

#include<iostream>
using namespace std;
int main()
{
	char word[100] = "Welcome to Shrey's repository!";
	int len = 0;
	for(int i=0;word[i]!='\0';i++)
	{
		len++;
	}
	
	for(int i= len-1;i>=0;i--)
	{
		cout<<word[i];
	}
	
	

	return 0;
}

