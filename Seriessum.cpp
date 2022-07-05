//1 + x/1! + x^2/2! + x^3/3!.........
#include<iostream>
using namespace std;
int main()
{
	int N,x,i;
	cout<<"Enter N and x\n";
	cin>>N>>x;
	double ans = 0,prod=1,fact=1;
	for(i=0;i<=N;i++)
	{	
		ans += prod/fact;
		prod *= x;
		fact *= (i+1);
		
	}
	
	cout<<ans<<endl;
	return 0;
}

