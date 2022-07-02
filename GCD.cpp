//To find the GCD of two numbers x and y
#include<iostream>
using namespace std;
int main()
{
	int x,y,min,i=1,gcd;
	cout<<"Enter two numbers: \n";
	cin>>x>>y;
	if(x<=y)
	{
		min=x;
	}
	else
	{
		min=y;
	}
	
	while(i<=min)
	{
		if(x%i==0 && y%i==0)
		{
		gcd=i;
	    } 
	    
		i++;
	}
	
	cout<<"The GCD of "<<x<<" and "<<y<<" is "<<gcd<<endl;
	return 0;
}
