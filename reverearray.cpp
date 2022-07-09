//To reverse an array
#include<iostream>
using namespace std;
int main()
{   
	int n;
	cout<<"Enter number of elements\n";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int i=0,j=n-1;
	while(i <= j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	
	cout<<"Reverse of the given array is:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
