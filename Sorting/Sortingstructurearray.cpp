#include<iostream>
using namespace std;
struct Person{
	char name[50];
	int age;
	char gender;
};
int main()
{
	int N,i;
	cout<<"Enter number of entries\n";
	cin>>N;
	Person persons[N];
	cout<<"Enter names with age amd gender respectively for "<<N<<" people"<<endl;
	for(i=0;i<N;i++)
	{
		cin>>persons[i].name>>persons[i].age>>persons[i].gender;
	}
	
	for(i=1;i<N;i++)
	{
		int j=i;
		while(j>0 && persons[j].age < persons[j-1].age)
		{
			Person temp = persons[j-1];
			persons[j-1] = persons[j];
			persons[j]=temp;
			j--;
		}
	}
	cout<<"Increasing order of age of the given entries is:\n";
	for(i=0;i<N;i++)
	{
		
		cout<<persons[i].name<<" "<<persons[i].age<<" "<<persons[i].gender<<"\n";
	}
	
}
