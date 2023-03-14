//Prime using functions (checking whether a and b are prime or not)
#include<iostream>
using namespace std;
int isPrime(int x)
{
	int i,c=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a,b;
	cout<<"Enter a and b\n";
	cin>>a>>b;
	int ansa=isPrime(a);
	if(ansa==1)
	{
		cout<<a<<" is prime\n";
	}
	else
	{
		cout<<a<<" is non-prime\n";
	}
	
	int ansb=isPrime(b);
	if(ansb==1)
	{
		cout<<b<<" is prime\n";
	}
	else
	{
		cout<<b<<" is non-prime\n";
	}
}
