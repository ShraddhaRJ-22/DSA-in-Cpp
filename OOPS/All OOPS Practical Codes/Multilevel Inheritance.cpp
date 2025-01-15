#include<iostream>
using namespace std;
class A
{
public:
int roll_no;
void getdata()
{
cout << "Enter Roll No.:";
cin >> roll_no;
}
void showdata()
{
cout << "Roll No.:" << roll_no <<endl;
}
};
class B:public A
{
public:
int sub1, sub2;
void getmarks()
{
cout << "Enter Marks for Subject1:";
cin >> sub1;
cout << "Enter Marks for Subject2:";
cin >> sub2;
}
void showmarks()
{
cout << "\nMarks of Subject1:" << sub1 << endl;
cout << "Marks of Subject2:" << sub2 << endl;
}
}; 
class C:public B
{
public:
int spm;
void getspm()
{
cout << "\nEnter Sports Marks:";
cin >> spm;
}
showspm()
{
cout << "Sports Marks:" << spm;
}
};
int main()
{
C obj;
obj.getdata();
obj.showdata();
obj.getmarks();
obj.showmarks();
obj.getspm();
obj.showspm();
return 0;
}

