/*To print star pattern eg:- N=3
O/P:*
	** 
	***
*/
#include<iostream>
using namespace std;
int main()
{
	int N,i=1;
	cout<<"Enter N\n";
	cin>>N;
	while(i<=N)
	{ 
	  int j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
	i++;
	}
	
return 0;
}	
