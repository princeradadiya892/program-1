
#include<iostream>
using namespace std;
int print(int &p);
int main()
{
	int p;
	cout<<"prince radadiya"<<endl;
	cout<<"220130318013"<<endl; 
	cout<<"Enter The Number ::";
	cin>>p;
	
	print(p);
	return 0;
}
int print(int &p)
{
	cout<<"The Number is ::"<<p;
}
