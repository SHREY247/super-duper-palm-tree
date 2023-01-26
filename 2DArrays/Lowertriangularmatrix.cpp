//Lower triangular matrix

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of a matrix\n";							//Diagonal exists in a square matrix only
	cin>>n;
	int A[n][n];
	cout<<"Enter the values of matrix row-wise\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	
	cout<<"Lower triangular matrix for the given matrix is:\n";
	
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
