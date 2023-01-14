//Print first n natural numbers
#include<iostream>
using namespace std;
int main()
{   
	int i=1,N;
	cout<<"Enter the value of N\n";
	cin>>N;
	if(N<0)
	cout<<"Please enter a natural number\n";
	while(i<=N)
	{
		cout<<i<<" ";
		i++;
	}
	
	return 0;
}
