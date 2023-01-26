//To find max of an array
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int N;
	cout<<"Enter size of array\n";
	cin>>N;
	if(N<=0)
	cout<<"Enter some elements\n";
	else
	{
	
	int arr[N];
	cout<<"Enter "<<N<<" elements\n";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	
	int max = INT_MIN;
	for(int j=0;j<N;j++)
	{
		if(arr[j]>max)
		{
			max = arr[j];
		}
		
    }
   
    cout<<"Maximum element is: "<<max<<endl;
		return 0;	
	}
}

