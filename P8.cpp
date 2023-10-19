#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Km,cm,m,inch,feet;
	
	cout<<"Enter the Km::";
	cin>>Km;
	
	cm=Km*100000;
	m=Km*1000;
	inch=Km*39370;
	feet=Km*3281;
	
	cout<<setprecision(2)<<fixed<<setfill('0');
	cout<<"KM to cm::"<<setw(10)<<cm<<endl;
	cout<<"KM to m::"<<setw(10)<<m<<endl;
	cout<<"KM to inch::"<<setw(10)<<inch<<endl;
	cout<<"KM to feet::"<<setw(10)<<feet<<endl;
	
	return 0;
}
