//To find out the number of elements which have the value equal to the maximum value while finding out maximum of given 3 numbers
#include<iostream>
using namespace std;
int main()
{

int x,y,z,max;
cout<<"Enter 3 values\n";
cin>>x>>y>>z;

if(x>=y && x>=z)
{
	max=x;
	cout<<"Maximum value equals "<<x<<endl;
}

else if(y>=x && y>=z)
{
	max=y;
	cout<<"Maximum value equals "<<y<<endl;
}

else
{
	max=z;
	cout<<"Maximum value equals "<<z<<endl;
}

int count=0;
if(x==max)
	count++;
if(y==max)
	count++;
if(z==max)
	count++;
	
cout<<"Out of the given three, "<<count<<" value(s) has/have the value equal to maximum value\n";
	
return 0;
}

