//To find whether a number is strong number or not
//If sum of factorials of all digits of N is equal to N then N is said to be a strong number
//Example 145 1! + 4! + 5! = 145

#include<iostream>
using namespace std;
int main()
{
	int N,n,sum=0;
	cout<<"Enter N\n";
	cin>>N;
	n=N;
	
	while(N>0)
	{
	int x=N%10;
	int fact=1,i=1;
	while(i<=x)
	{
		fact *= i;
		i++;
	}
	sum+=fact;
	N=N/10;	
	}
	
	if(sum==n)
	{
		cout<<"Yes\n";
	}
		else
		{
			cout<<"No\n";
		}
		
		return 0;			
} 
