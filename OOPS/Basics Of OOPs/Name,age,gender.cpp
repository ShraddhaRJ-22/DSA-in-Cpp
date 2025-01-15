// Name,age,gender
#include<iostream>
using namespace std;

class Student
{
	public:
		string Name;
		int age;
		string gender;
		
	void print_info()
	{
	cout<<"Name:";
	cin>>Name;
	cout<<"Age:";
	cin>>age;
	cout<<"Gender:";
	cin>>gender;
	}	
};

int main()
{
	Student arr[3];
	for(int i=0;i<3;i++){
		

	cout<<"Name:";
	cin>>arr[i].Name;
	cout<<"Age:";
	cin>>arr[i].age;
	cout<<"Gender:";
	cin>>arr[i].gender;
}
for(int i=0;i<3;i++){
	arr[i].print_info();
}
	
	return 0;
}
