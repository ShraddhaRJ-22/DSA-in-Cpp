// Operator Overloading : String Concatenation
#include<iostream>
#include<string>
using namespace std;
class Mystring{
	string str;
	public:
		void input(){
			cout<<"Enter String: ";
			cin>>str;
		}
		void display()
		{
			cout<<"Concatenated String: "<<str<<endl;
		}
		Mystring operator+(Mystring obj)
		{
			Mystring temp;
			temp.str = str + obj.str;
			return temp;
		}
};
int main()
{
	Mystring s1,s2,s3;
	cout<<"String 1: "<<endl;
	s1.input();
	
	cout<<"String 2:"<<endl;
	s2.input();
	
	s3 = s1 + s2;
	cout<<"Concatenated String: "<<endl;
	s3.display();
	
	return 0;
}
