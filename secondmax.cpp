//To find out the second maximum element from any 3 elements
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter 3 values\n";
	cin>>x>>y>>z;
	
	if(x>=y && x>=z)
	{
		if(y>=z)
		{
			cout<<"Second maximum element is "<<y<<endl;
		}
		else
		{
			cout<<"Second maximum element is "<<z<<endl;
		}
	}
	else if(y>=x && y>=z)
	{
		if(x>=z)
		{
			cout<<"Second maximum element is "<<x<<endl;
		}
		else
		{
			cout<<"Second maximum element is "<<z<<endl;
		}
	}
	
	else
	{
		if(y>=x)
		{
			cout<<"Second maximum element is "<<y<<endl;
		}
		else
		{
			cout<<"Second maximum element is "<<x<<endl;
		}
	}
}
