// Default Constructor

#include<iostream>
using namespace std;
class construct
{
	public:
		int a,b;
		construct(){
			a = 10;
			b = 15;
		}
};
int main()
{
	construct c;
	cout<<"a:"<<c.a<<endl;
	cout<<"b:"<<c.b<<endl;
	
	return 0;
}