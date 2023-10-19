#include<iostream>
using namespace std;
void sum(int &a, int &b)

{
	cout<<"Sum of two no. is"<<a+b;
}
int main()
{
	int a,b;
	cout<<"enter number 1 and 2::";
	cin>>a>>b;
	sum(a,b);
	
	return 0;
}