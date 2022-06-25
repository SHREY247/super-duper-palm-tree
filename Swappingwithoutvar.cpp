#include<iostream>
using namespace std;
int main()
{
	int x=1,y=2;
	x=x+y;      //x=3 y=2
	y=x-y;		//x=3 y=1
	x=x-y;
	cout<<x<<" "<<y<<endl;
	return 0;
}
