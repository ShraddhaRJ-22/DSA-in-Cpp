// Copy Constructor

#include<iostream>
using namespace std;
class demo
{
	private:
		int num1,num2;
		
	public:
		demo (int n1,int n2){
			num1 = n1;
			num2 = n2;
	    }
		void display()
		{
			cout<<"Num 1:"<<num1<<endl;
			cout<<"Num 2:"<<num2<<endl;
		}
};
int main()
{
	demo d1(12,5);
	demo d2 = d1;
	d1.display();
	d2.display();
	
	return 0;
}
