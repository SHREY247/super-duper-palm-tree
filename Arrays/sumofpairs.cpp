//Pairs in an array(with elements at 2 different positions) that add up to x
#include<iostream>
using namespace std;
int main()
{
	int N,x;
	cout<<"Enter size of array\n";
	cin>>N;
	int arr[N];
	cout<<"Enter "<<N<<" elements\n";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter x\n";
	cin>>x;
		for(int i=0;i<N;i++)
	{
		for(int j = i+1; j<N; j++)
		{
			if(arr[i] + arr[j] == x)
			{
				cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;	
			}
		}
	}
	
	
	return 0;
}
