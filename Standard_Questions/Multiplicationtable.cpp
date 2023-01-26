//Printing the multiplication table of a number N
#include<iostream>
using namespace std;
int main()
{
	int N,i=1;
	cout<<"Enter the value of N\n";
	cin>>N;
	while(i<=10)
	{
		cout<<N<<" X "<<i<<" = "<<N*i<<endl;
		i++;
	}
	return 0;		
}


