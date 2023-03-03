//You are given an N*N 2D matrix, rotate the matrix by 90 degrees (clockwise)
#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

