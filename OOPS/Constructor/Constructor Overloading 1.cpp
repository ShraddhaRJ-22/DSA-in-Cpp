// Constructor Overloading
#include<iostream>
using namespace std;
class Person{
	private:
		int age;
	public:
		Person()  // Constructor with no arguments
		{
			age = 20;
		}
		Perosn(int a) // Constructor with an argument
		{
			age = a;
		}
		int getAge()
		{
			return age;
		}
};
