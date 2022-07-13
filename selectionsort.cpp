//Selection sort
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
	
	for(int i=0;i<N;i++)
	{
		int min = INT_MAX,index;
		for(int j=i;j<N;j++)
		{
			if(arr[j]<min)
			{
				min = arr[j];
				index = j;
			}
			
		}
	
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index]= temp;
	}
		for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	
		
	
	return 0;
}
