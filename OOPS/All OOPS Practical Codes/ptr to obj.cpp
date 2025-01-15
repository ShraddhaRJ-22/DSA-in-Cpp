#include<iostream>
using namespace std;
class student{
public:
string nm,branch;
int rn,age;
void getdetails()
{
cout<<"Enter your name: "<<endl;
cin>>nm;
cout<<"Enter your Branch: "<<endl;
cin>>branch;
cout<<"Enter your Age: "<<endl;
cin>>age;
cout<<"Enter your Roll no: "<<endl;
cin>>rn;
}
void showdata()
{
cout<<"Name : "<<nm<<endl;
cout<<"Branch : "<<branch<<endl;
cout<<"Age : "<<age<<endl;
cout<<"Roll no : "<<nm<<endl;
}
};
int main()
{
student srushti;
student *ptr;
ptr=&srushti;
ptr->getdetails();
ptr->showdata();
return 0;
}
