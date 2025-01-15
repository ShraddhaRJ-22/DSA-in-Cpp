// Multilevel Inheritance 2
#include<iostream>
using namespace std;
class Company{
	protected:
		int id;
		string name;
		public:
			void getdetails(){
				cout<<"Enter ID of Employee: "<<endl;
				cin>>id;
				cout<<"Enter Name of Employee: "<<endl;
				cin>>name;
			}
			void showdetails(){
				cout<<"Id: "<<id<<endl;
				cout<<"Name: "<<id<<endl;
			}
};
class Employee: public Company{
	protected:
		int age;
		public:
			void takedetails(){
				cout<<"Enter Age of Employee: "<<endl;
				cin>>age;
			}
			void seedetails(){
				cout<<"Age: "<<age<<endl;
			}
};
class Details: public Employee{
	protected:
		int account_no,salary;
		public:
			void data(){
				cout<<"Enter Account no: "<<endl;
				cin>>account_no;
				cout<<"Enter Salary permonth: "<<endl;
				cin>>salary;
			}
			void show(){
				cout<<"Account Number: "<<account_no<<endl;	
				cout<<"Salary per Year: "<<(salary*12)<<endl;				
			}
};
int main()
{
	Details d;
	d.getdetails();
	d.takedetails();
	d.data();
	
	cout<<"*********** Employee Details ***********"<<endl;
	d.show();
	d.seedetails();
	d.showdetails();
	
	return 0;
}
