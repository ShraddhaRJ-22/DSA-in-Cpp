// Single inheritance
#include<iostream>
using namespace std;
class Student_info{
	private:
		int rollno;
		string name, blood;
	public:
		void getdata(){
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter Roll no: "<<endl;
			cin>>rollno;
			cout<<"Enter Blood-Type: "<<endl;
			cin>>blood;
		}
		void showdata(){
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<name<<endl;
			cout<<"Blood Group: "<<name<<endl;
		}
};
class Information: public Student_info{
	public:
		int sub1,sub2;
		int result;
		
		void takedata(){
			cout<<"Enter Marks for Subject 1: "<<endl;
			cin>>sub1;
			cout<<"Enter Marks for Subject 2: "<<endl;
			cin>>sub2;
		}
		void displaydata(){
			cout<<"Marks of Subject 1: "<<sub1<<endl;
			cout<<"Marks of Subject 2: "<<sub2<<endl;
			cout<<"Result: "<<(sub1+sub2)/2<<endl;
		}
};
int main()
{
	Information i;
	i.getdata();
	
	cout<<"*********************** Student Information ***********************"<<endl;
	i.showdata();
	i.takedata();
	i.displaydata();
	
	return 0;
}
