//Sum of N terms of series 1 1/2 1/3 1/4...
#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter N\n";
	cin>>N;
	double sum=0,x=1.0;
	for(int i=1;i<=N;i++)
	{
		sum += x/i;
	}
	
	cout<<"Sum of "<<N<<" terms of this series is "<<sum<<endl;
	return 0;
}
