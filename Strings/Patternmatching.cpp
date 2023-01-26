//Pattern matching in strings  (To check whether S1 contains S2)
#include<iostream>
using namespace std;
int main()
{
	char a1[100];
	char a2[100];
	cout<<"Enter string S1\n";
	cin>>a1;
	cout<<"Enter S2\n";
	cin>>a2;
	
	int l1=0,l2=0,i=0,j;
	while(a1[i]!='\0')
	{
		l1++;
		i++;
	}
	
	
	i=0;
	while(a2[i]!='\0')
	{
		l2++;
		i++;
	}
	int match = 0;
	for(i = 0; i<=l1-l2;i++)
	{	match = 1;
		for(j=i;j<=i+l2-1;j++)
		{
			if(a1[j] != a2[j-i])
			{
				match = 0;
				break;
			}
		}
		
		if(match == 1)
		break;
	}
	
	if(match == 1)
	{
		cout<<"Yes\n";
		
	}
	else
	cout<<"No\n";
	return 0;
}
