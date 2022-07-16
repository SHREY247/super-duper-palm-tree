//Transpose of a matrix
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int N,x;
	cout<<"Enter the size of matrix\n";
	cin>>N;
	int arr[N][N];
	cout<<"Enter the elements of the matrix row wise\n";
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>arr[i][j];
		}	
	}
	
	
		cout<<"Transpose of the given matrix is:\n";
		for(int i=0;i<N;i++)
	{
		for(int j=i;j<N;j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
			
		}
	
	}
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;	
	}
	
	
	
	

	
	return 0;	
}
	
