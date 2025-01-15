// Function Overloading

#include<iostream>
using namespace std;
class cal
{
	public:
		static int add(int a,int b){
			return a+b;
		}
		static int add(int x,int y,int z){
			return x+y+z;
		}
};
int main()
{
	cal c;
	cout<<"A + B = "<<c.add(30,5,8)<<endl;
	cout<<"X + Y + Z = "<<c.add(5,35,2)<<endl;
	
	return 0;
}
