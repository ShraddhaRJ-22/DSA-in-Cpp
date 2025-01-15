// Employee
#include<iostream>
using namespace std;

class Employee
{
	string name, bank;
	int salary, id;
	public:
		void getdata();
		void showdata();
};

void Employee :: getdata()
{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Bank name:";
	cin>>bank;
	cout<<"Salary:";
	cin>>salary;
	cout<<"ID :";
	cin>>id;
}

void Employee :: showdata()
{
	cout<<"*********** Employee Details **************"<<endl;
	cout<<"Name of Employee:"<<name<<endl;
	cout<<"Bank:"<<bank<<endl;
	cout<<"Salary:"<<salary<<endl;
	cout<<"ID :"<<id<<endl;
}

int main()
{
	Employee e1;
	e1.getdata();
	e1.showdata();
	
	Employee e2;
	e2.getdata();
	e2.showdata();
	
	Employee e3;
	e3.getdata();
	e3.showdata();
	
	return 0;
}
