// Multiple Inheritance 2
#include<iostream>
using namespace std;
class Shape{
	protected:
		float length;
		public:
			void getdata(){
				cout<<"Enter Length: "<<endl;
				cin>>length;
			}
			void showdata(){
				cout<<"Length: "<<endl;
			}	
};
class Rectangle{
	protected:
		float breadth;
		public:
			void takedata(){
				cout<<"Enter Breadth: "<<endl;
				cin>>breadth;
			}
			void displaydata(){
				cout<<"Breadth: "<<endl;
			}
};
class Area: public Shape,public Rectangle{
	float area;
	public:
		void get(){
			area = (length * breadth);
		}
		void show(){
			cout<<"Area of Rectangle: "<<area<<endl;
		}
};
int main()
{
	Area a;
	a.getdata();
	a.showdata();
	a.takedata();
	a.get();
	a.show();
	
	return 0;
}
