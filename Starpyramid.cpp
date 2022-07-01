/*To print stars in a pyramid pattern 
Eg: N=5
    *
   * *
  * * *
 * * * * 
* * * * * 
*/
#include<iostream>
using namespace std;
int main()
{   
	int N,i=1;
	cout<<"Enter N\n";
	cin>>N;
	while(i<=N)                        //This while represents line number i
	{
		int j=1;
		while(j<=N-i)
		{
			cout<<" ";
			j++;
		}
		
		j=1;
		while(j<=i)
		{
			cout<<"* ";
			j++;
		}
		
		cout<<"\n";
		i++;	
	}
	return 0;	
}
	
	
	
	
	
	


