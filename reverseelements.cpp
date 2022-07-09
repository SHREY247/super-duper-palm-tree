//Reverse the integers scanned
#include<iostream>
using namespace std;
int main()
{
	int N,i;
	cout<<"Enter number of elements\n";
	cin>>N;
	cout<<"Enter "<<N<<" elements: \n";
	int arr[N];
	for(i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	
	for(i= N-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	
}
