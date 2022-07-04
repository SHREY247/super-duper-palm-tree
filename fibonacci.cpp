//To generate 'n'th number from the fibonacci series 
// In a fibonacci series t(i) = t(i-1) + t(i-2)   
//T(0)=0, T(1)=1, T(2)=0+1=1,T(3)=2.......
#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter N\n";
	cin>>N;
	int prev=0,curr=1,i;
	for(i=2; i<=N;i++)				//We'll start from term 2 which would be sum of t(0) and t(1)
	{
		int temp=prev + curr;
		prev = curr;
		curr = temp;
	}
	
	cout<<"T("<<N<<") of fibonacci series would be "<<curr<<endl;
	return 0;
	
}
