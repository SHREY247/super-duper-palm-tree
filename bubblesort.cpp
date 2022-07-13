//Bubble sort
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int N,x;
	cout<<"Enter the size of array\n";
	cin>>N;
	int arr[N];
	cout<<"Enter "<<N<<" elements\n";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<N-1;i++)
	{
		for(int j=0; j<N-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"Sorted array is\n";
	
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
