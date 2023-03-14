//To insert an element in an array
#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter maximum size of the array\n";
cin>>n;
int arr[n];
int k,x;
cout<<"Enter initial number of elements present in the array\n";
cin>>k;
cout<<"Enter "<<k<<" elements\n";
for(int i=0;i<k;i++)
{
	cin>>arr[i];
}

cout<<"Now enter the element you want to insert\n";

cin>>x;
cout<<"Enter the index(starts from 0) at which you want to enter the new element "<<x<<" :\n";
int j;
cin>>j;
if(j>k)
cout<<"Enter proper index\n";
else
{

for(int s=k-1;s>=j;s--)
{
	arr[s+1] = arr[s];
}

arr[j]=x;

for(int i=0;i<k+1;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}
}
