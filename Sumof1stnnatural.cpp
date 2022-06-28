//Print sum of first n natural numbers
#include<iostream>
using namespace std;
int main()
{   
	int i=1,N,sum=0;
	cout<<"Enter the value of N\n";
	cin>>N;
	if(N<0)
	cout<<"Please enter a natural number\n";
	while(i<=N)
	{   sum+=i;
		cout<<i<<" ";
		i++;
		
	}
	
	cout<<endl<<"Sum of first "<<N<<" natural numbers is "<<sum<<endl;
	
	return 0;
}
