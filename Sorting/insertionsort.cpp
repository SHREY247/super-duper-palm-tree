//Insertion sort
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
	
	for(int i=1;i<N;i++)
	{
		int j = i;
		while(j>0 && arr[j]<arr[j-1])
		{
			int temp =arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}
	cout<<"Sorted array is\n";
	
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
