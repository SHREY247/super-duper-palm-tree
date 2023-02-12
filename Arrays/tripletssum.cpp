//Triplets with sum x with no permutations {2,0,3} is equivalent to {3,0,2}
#include<iostream>
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
	
	cout<<"Enter x\n";
	cin>>x;
	
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			for(int k=j+1;k<N;k++)
			{
				if(arr[i]+arr[j]+arr[k]==x)
				{
					cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<x<<endl;
				}
			}
		}
	}
	
	
		
	return 0;
}
