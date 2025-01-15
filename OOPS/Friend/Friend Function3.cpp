// Friend Classes

#include<iostream>
using namespace std;
// Forward Declaration
class Complex;

class Calculator{
	public:
		int add(int a,int b){
			return (a + b);
		}
		int sumRealComplex(Complex , Complex);
		int sumCompComplex(Complex , Complex);
};

class Complex{
	int a,b;
	// Declaring the Entire class as friend
	friend class Calculator;
	public:
		void setNumber(int n1,int n2){
			a = n1;
			b = n2;
		}
		void printNumber()
		{
			cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
		}
};

int Calculator :: sumRealComplex(Complex o1,Complex o2)
{	
	return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2)
{	
	return (o1.b + o2.b);
}

int main()
{
	Complex o1, o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	
	Calculator cal;
	int result_1 = cal.sumRealComplex(o1,o2);
	cout<<"The sum of real part of o1 & o2 is "<<result_1<<endl;
	
	int result_2 = cal.sumCompComplex(o1,o2);
	cout<<"The sum of Complex part of o1 & o2 is "<<result_2<<endl;
	return 0;
}
