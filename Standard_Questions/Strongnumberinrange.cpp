//To find all the strong numbers in the range from 1 to N
//If sum of factorials of all digits of N is equal to N then N is said to be a strong number
//Example 145 1! + 4! + 5! = 145

#include<iostream>
using namespace std;
int main()
{
	int N,temp;
	cout<<"Enter N\n";
	cin>>N;
	int num=1;
	while(num<=N)
	{	
		int sum=0,temp=num;
    	while(temp>0)
	{
	int x=temp%10;
	int fact=1,i=1;
	while(i<=x)
	{
		fact *= i;
		i++;
	}
	sum+=fact;
	temp=temp/10;	
	}
	
	if(sum==num)
	{
		cout<<num<<" ";
	}
	num++;
	}
	
	

		
		return 0;			
} 
