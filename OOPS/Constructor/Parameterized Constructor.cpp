// Parameterized Constructor

#include<iostream>
using namespace std;
class emp
{
	public:
		int id;
		string name;
		float salary;
		emp(int i,string n,float s)
		{
			id = i;
			name = n;
			salary = s;
		}
		void display(){
			cout<<id<<" "<<name<<" "<<salary<<" "<<endl;
		}
};
int main()
{
	emp e1=emp(122,"Madeline",50000.50);
	e1.display();
	
	return 0;
}
