//To reverse a number N
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N;
	cout<<"Enter a number N\n";
	cin>>N;
	//Compute number of digits d
	
	int ans = 0;
	while(N)
	{
		int r=N%10;
		ans = ans * 10 + r;
		N/=10;
	}
	
	cout<<ans<<endl;
}
