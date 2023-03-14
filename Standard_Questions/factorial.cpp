//To find factorial of a number N
#include<iostream>
using namespace std;
int main()
{
	int N,fact=1,i=1;
	cout<<"Enter the value of N\n";
	cin>>N;
	while(i<=N)
	{
		fact=fact*i;
		i++;	
	}	

 cout<<"Factorial of "<<N<<" is "<<fact<<endl;
 
 return 0;
}
