#include<iostream>
using namespace std;
class demo
{
public:
int a, b, sum;
void getdata()
{
cout << "Enter values for a and b:";
cin >> a >> b;
}
void showdata()
{
cout << "\na=" << a << endl << "b=" << b << endl;
sum = a + b;
cout << "Addition=" << a+b << endl;
}
};
class sub:public demo
{
public:
int a1, b1, sub;
void getdetails()
{
cout << "\nEnter values for a1 and b1:";
cin >> a1 >> b1;
}
void showdetails()
{
cout << "\na1=" << a1 << endl << "b1=" << b1 << endl;
sub = a1 - b1;
cout << "Subtration=" << a1-b1 << endl;
cout << "\n";
}
};
class derived:public demo
{
public:
int a2, b2, mul;
void getinput()
{
cout << "\nEnter values for a2 and b2:";
cin >> a2 >> b2;
}
void showinput()
{
cout << "\na2=" << a2 << endl << "b2=" << b2 << endl;
mul = a2*b2;
cout << "Multiplication=" << a2*b2 << endl;
}
};
int main()
{
sub obj1;
obj1.getdata();
obj1.showdata();
obj1.getdetails();
obj1.showdetails();
derived d1;
d1.getdata();
d1.showdata();
d1.getinput();
d1.showinput();
return 0;
}

