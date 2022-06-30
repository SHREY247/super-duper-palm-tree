//To print whether a number is prime or not
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
	if(count==2)
	cout<<"\nThe number of factors of "<<N<<" are "<<count<<", First factor is 1 and the second one is "<<N<<". Hence "<<N<<" is prime.\n";
	else
	cout<<endl<<N<<" is non prime since it has more than 2 factors\n";
	return 0;	
}
