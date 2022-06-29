//Printing first N odd and first N even numbers 
#include<iostream>
using namespace std;
int main()
{
	int i=1,j=2,N,count=0,countj;
	cout<<"Enter N\n";
	cin>>N;
	cout<<"Fist N odd natural numbers are\n";
	while(count<N)
	{
		cout<<i<<" ";
		i+=2;
		count++;
	}
	cout<<endl;
	cout<<"Fist N even natural numbers are\n";
	while(countj<N)
	{
		cout<<j<<" ";
		j+=2;
		countj++;
	}
	cout<<endl;
	
	
return 0;
}
