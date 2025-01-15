// Hierarchial Inheritance
#include<iostream>
using namespace std;
class Number{
	protected:
		int a,b;
		public:
			void getdata(){
				cout<<"Enter a: "<<endl;
				cin>>a;
				cout<<"Enter b: "<<endl;
				cin>>b;
			}
};
class Subtraction: public Number{

		public:
			void subdata(){
				cout<<"Subtraction: "<<a-b<<endl;
			}
};
class Addition: public Number{

		public:
			void adddata(){
				cout<<"Addition: "<<a+b<<endl;
			}
};
int main()
{
	Addition a;
	Subtraction s;
	
	a.getdata();
	s.getdata();
	a.adddata();
	s.subdata();
	
	return 0;
	
}
