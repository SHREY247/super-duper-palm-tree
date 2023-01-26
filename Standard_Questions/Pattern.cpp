/*To print a number digitwise in a pattern like for N=123456, output is
1
12
123
1234 
12345 
123456*/

#include <iostream>
using namespace std;
int main()
{
	int N,x=1;
	cout<<"Enter N\n";
	cin>>N;
	while(N/x>9)
	{
		x*=10;
	}
	
	
	while(x>0)
	{
		cout<<N/x<<" "<<endl;
		x=x/10;
	}
	return 0;	
}
