//To find LCM of two numbers a and b
#include<iostream>
using namespace std;
int main()
{
	int a,b,max,ans;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	
	if(a>=b)
	max=a;
	
	else
	max=b;
	
	while(max <= a*b)
	{
		if(max%a == 0  && max%b ==0)
		{
			ans = max;
			break;
		}
	
	max++;
	}
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<ans<<endl;
	
	return 0;
}
