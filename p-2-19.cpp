
#include<iostream>
using namespace std;
int print(int &a,int &b);
int main()
{
	int a,b;
	cout<<"prince radadiya"<<endl;
	cout<<"220130318013"<<endl;
	cout<<"Enter The A ::";
	cin>>a;
	cout<<"Enter The B ::";
	cin>>b;
	
	print(a,b);
	return 0;
}
int print(int &a,int &b)
{
	cout<<"A is ::"<<a<<endl;
	cout<<"B is ::"<<b<<endl;
}
