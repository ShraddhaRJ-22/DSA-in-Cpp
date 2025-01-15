// Binary
#include<iostream>
using namespace std;
class Binary{
	int a,b;
	public:
		Binary(){
			a = 0;    // Default Constructor
			b = 0;
		}
		Binary(int x,int y){
			a = x;
			b = y;
		}
		Binary operator+(Binary b);
		void showdata();
};
Binary Binary :: operator+(Binary b)
{
	Binary temp;
	temp.a = a + b.a;
	temp.b = b.b;
	return temp;
}
void Binary :: showdata()
{
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
}
int main()
{
	Binary b1,b2,b3;
	b1 = Binary(12,4);
	b2 = Binary(3,9);
	b3 = b1 + b2;
	
	b1.showdata();
	b2.showdata();
	b3.showdata();
	
	return 0;
}
