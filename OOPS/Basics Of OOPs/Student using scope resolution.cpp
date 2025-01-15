// Student using class and Object using scope resolution
#include<iostream>
using namespace std;

class student
{
	private:
		string name,branch,address;
		int age,rollno;
		float percent;
		
		public:
			void getdata();
			void showdata();
};
void student :: getdata()
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter branch:";
	cin>>branch;
	cout<<"Enter Address:";
	cin>>address;
	cout<<"Enter Age:";
	cin>>age;
	cout<<"Enter Roll no:";
	cin>>rollno;
	cout<<"Enter Percent:";
	cin>>percent;
}
void student :: showdata()
{
	cout<<"**************** STUDENT INFORMATION **********************"<<endl;
	cout<<name<<endl;
	cout<<branch<<endl;
	cout<<address<<endl;
	cout<<age<<endl;
	cout<<rollno<<endl;
	cout<<percent<<endl;	
}

int main()
{
	student s;
	s.getdata();
	s.showdata();
	
	student s1;
	s1.getdata();
	s1.showdata();
	
	return 0;
}
