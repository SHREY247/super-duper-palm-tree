//Multiplication of two matrices 
//Dimensions of matrix 1: m x n
//Dimensions of matrix 2: n x p
//Multiplication is only possible when no. of columns of matrix 1 = no. of rows of matrix 2
#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter m, n and p\n";
	int m,n,p;
	cin>>m>>n>>p;
	int A[m][n];
	cout<<"Enter the elements of matrix 1 row by row\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	
	cout<<"Enter the elements of matrix 2 row by row\n";
	int B[n][p];
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++)
		{
			cin>>B[i][j];
		}
	}
	
	int C[m][p];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			C[i][j] = 0;
			for(int k=0;k<n;k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	cout<<"Multiplication matrix of the above matrices is\n";
		for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			cout<<C[i][j]<<" ";
		} 
		cout<<endl;
	}
	
	
	
	return 0;
}
