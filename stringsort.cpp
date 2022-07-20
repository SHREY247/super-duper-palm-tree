//Sorting a string
#include<iostream>
using namespace std;
int main()
{
	char word[100] = "helloeveryone";
	int i,j;
	for(i=1;word[i]!='\0';i++)
	{
		j = i;
		
		while(j>0 && word[j] < word[j-1])
		{
			char temp = word[j];
			word[j] = word[j-1];
			word[j-1] = temp;
			j--;
		}
		
	}
	
	
	
	cout<<word<<endl;
}
