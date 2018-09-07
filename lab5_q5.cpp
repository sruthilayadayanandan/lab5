#include<iostream>
using namespace std;
int main()
{
	//asking for input
	cout<<"entre the numebr to be checked:-";
	//declaring variables
	int a;
	//taking input
	cin>>a;
	//checking divisibility by 2
	if(a%2==0)
	{cout<<a<<" is an even number";}
	//if not then
	else
	{cout<<a<<" is a odd number";}
	return 0;
}
