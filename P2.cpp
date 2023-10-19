#include<iostream>
using namespace std;
class temp
{
	public :
		static int a;
		void display()
		{
			cout<<"Value of A is::"<<a;
		} 
};
int temp::a=10;
int main()
{
	temp t1;
	t1.display();
	return 0;
}