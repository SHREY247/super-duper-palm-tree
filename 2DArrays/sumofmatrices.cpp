//Addition of two matrices
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter number of rows and columns respectively\n";
	cin>>m>>n;
	int A[m][n];
	cout<<"Enter the values of first matrix row-wise\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	
	int B[m][n];
	cout<<"Enter the values of second matrix row-wise\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>B[i][j];
		}
	}
	cout<<"The new matrix after addition is as:\n";
	
	int C[m][n];
		for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			C[i][j]=A[i][j] +B[i][j];
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	

	
	
	return 0;
}
