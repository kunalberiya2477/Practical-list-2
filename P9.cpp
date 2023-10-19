#include<iostream>
using namespace std;
int a=5;
int b=5;
int main()
{
	int sum=0;
	sum=a+::b;
	cout<<"Sum of number::"<<sum;
	return 0;
}