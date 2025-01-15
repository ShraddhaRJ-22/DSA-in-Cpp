#include<iostream> using 
namespace std; class 
student 
{ 
private: 
string nm,branch; 
int rn; 
public: 
void getdata() 
{ 
cout<<"Enter name of student:"; 
cin>>nm; 
cout<<"Enter roll no:"; 
cin>>rn; 
cout<<"Enter branch:"; 
cin>>branch; 
} 
void showdata() 
{ 
 cout<<"******* STUDENT INFORMATION *******"<<endl; 
 cout<<"Name:"<<nm<<endl; 
 cout<<"Roll no:"<<rn<<endl; 
cout<<"Branch:"<<branch<<endl; 
} 
}; 
int main() 
{ 
student s,t; 
s.getdata(); 
s.showdata(); 
t.getdata(); 
t.showdata(); 
return 0; 
}
