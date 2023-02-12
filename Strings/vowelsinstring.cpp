//To calculate number of vowels in a string
#include<iostream>
using namespace std;
int main()
{
	char word[100] = "Welcome to Shrey's repository!";
	char vowels[100] = "aeiouAEIOU";
	int len = 0,count=0;
	for(int i=0;word[i]!='\0';i++)
	{   
		for(int j=0;vowels[j]!='\0';j++)
		{
			if(word[i]==vowels[j])
			{
				count++;
				break;
			}
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}

