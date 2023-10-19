#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cout<<"Enter any number::";
	cin>>a;
	cout<<setprecision(5)<<fixed;
	cout<<"Value of a is::"<<a;
	
	return 0;
}