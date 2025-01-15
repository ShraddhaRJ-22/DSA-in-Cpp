// OOPS
#include<iostream>
using namespace std;

class Employee
{
	private:
		int a, b, c;
	public:
	int d, e;
	
	void setdata(int a,int b,int c);  // Declaration
	void getdata(){ // print
		cout<<"Value of a is:"<<a<<endl;
		cout<<"Value of b is:"<<b<<endl;
		cout<<"Value of c is:"<<c<<endl;
		cout<<"Value of d is:"<<d<<endl;
		cout<<"Value of e is:"<<e<<endl;
	}	
};

void Employee :: setdata(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
}
int main()
{
	Employee harry;
	harry.d=34;           // here we cant access a as it is private.
	harry.e=89;       // a function in the class can only access a,b,c
	harry.setdata(1,2,4);
	harry.getdata();
	return 0;
}
