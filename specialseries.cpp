//Sum of N terms of series 1 11 111 1111.......
#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter N\n";
	cin>>N;
	int sum=0,t=1;
	for(int i=1;i<=N;i++)
	{
		sum += t;
		t = t*10 + 1;
	}
	
	cout<<"Sum of "<<N<<" terms of this series is "<<sum<<endl;
	return 0;
}
