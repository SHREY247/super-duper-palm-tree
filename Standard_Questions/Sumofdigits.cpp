//To print the sum of digits of a number N 
#include<iostream>
using namespace std;
int main()
{
	int y,n,N,sum=0;
	cout<<"Enter N\n";
	cin>>N;
	n=N;
	while(N>0)
	{
		y=N%10;
		sum=sum+y;	
		N=N/10;
	}
	cout<<"Sum of digits of "<<n<<" is "<<sum<<endl;
	
	return 0;
}
