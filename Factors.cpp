//To print the factors of a number N and also their count
#include<iostream>
using namespace std;
int main()
{
	int N,count=0,i=1;
	cout<<"Enter N\n";
	cin>>N;
	cout<<"The factors of "<<N<<" are"<<endl;
	while(i<=N)
	{
		if(N%i==0)
		{
			cout<<i<<" ";
			count++;	
		}
		
		i++;
	}
	cout<<"\nThe number of factors of "<<N<<" are "<<count<<endl;
	return 0;	
}
