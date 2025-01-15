// Function Overlaoding
#include<iostream>
using namespace std;

class Print_Data{
	public:
	// Function to print an integer
	void print(int num){
		cout<<"Printing Integer: "<<num<<endl;
	}
	// Function to print an double
	void print(double num){
		cout<<"Printing Double: "<<num<<endl;
	}
	// Function to print an string
	void print(string str){
		cout<<"Printing String: "<<str<<endl;
	}
};
int main()
{
	Print_Data printer;
	
	printer.print(40);
	printer.print(2.44);
	printer.print("Hello World");
	
	
	return 0;
}
