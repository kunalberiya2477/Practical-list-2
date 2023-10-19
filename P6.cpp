#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cout<<"Enter any no::";
	cin>>a;
	cout<<"Value of a is::"<<setfill('0')<<setw(5)<<a;
	
	return 0;
}