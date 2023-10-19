#include<iostream>
using namespace std;
  
int a;
int& retByRef();
int main()
{
	cout<<"Enter any number::";
	retByRef()=a;
	cin>>a;
	cout<<"Return by refrence value is"<<a;
	
	return 0;
}
   int& retByRef()
{
	return a;
}