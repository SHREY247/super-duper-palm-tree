//Addition of diagonal elements of a matrix

#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter size of a matrix\n";							//Diagoanl exists in a square matrix only
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
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				ans += A[i][j];
			}
		}
	}
	cout<<"Sum of elements of right(primary) diagonal is "<<ans<<endl;
	
	int ans2=0;
	
	int i=0,j=n-1;
	while(i<n)
	{
		ans2+=A[i][j];
		i++;
		j--;
	}
	
	cout<<"Sum of elements of left diagonal is "<<ans2<<endl;
	
	
	
	return 0;
}
