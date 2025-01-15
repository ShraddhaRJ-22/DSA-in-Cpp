// Function Overloading 
// ->The process of defining multiple functions with the same name & signature, but
//    different parameter lists

#include<iostream>
using namespace std;

class Myclass
{
	public:
		
	int add(int a,int b){
		return a + b;
	}
	float add(float x,float y){
		return x + y;
	}
	double add(double p,double q){
		return p + q;
	}
};

int main()
{
	Myclass M1;
	cout<<"A + B: "<<M1.add(2,3)<<endl;
	cout<<"X + Y: "<<M1.add(1.5,3.5)<<endl;
	cout<<"P + Q: "<<M1.add(2.678,3.45)<<endl;
	
	return 0;
	
}
