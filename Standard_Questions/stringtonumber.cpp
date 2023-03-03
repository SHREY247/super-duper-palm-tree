//Converting a string to number with actual logic 
#include<iostream>
using namespace std;
int main()
{
	char a[100]="12345678";
	long long x = 0;
	int i=0,len=0;
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	
	len--;
	long long power = 1;
	while(len>=0)
	{
		x += (a[len] - '0') * power;
		len--;
		power *= 10;
		
	}
	
	
	cout<<x<<endl;
	
	
	
	return 0;
}
