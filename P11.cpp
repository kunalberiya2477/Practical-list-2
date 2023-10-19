#include<iostream>
using namespace std;
int sum(int &a, int &b)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"enter no 1 and 2::";
	cin>>a>>b;
	sum(a,b);
	
	cout<<"sum of two no is::"<<a+b;
	return 0;
}