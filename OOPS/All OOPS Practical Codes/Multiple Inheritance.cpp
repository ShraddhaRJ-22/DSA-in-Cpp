#include<iostream>
using namespace std;
class area
{
protected:
float l;
public:
void getarea()
{
cout << "Enter Length:";
cin >> l;
}
void showarea()
{
cout << "Length=" << l;
}
};
class perimeter
{
protected:
float b;
public:
void getp()
{
cout << "\nEnter Breadth:";
cin >> b;
} 
void showp()
{
cout << "Breadth:" << b;
}
};
class rectangle : public area, public perimeter
{
protected:
float area, per;
public:
void get()
{
area = (l*b);
per = 2*(l+b);
}
void show()
{
cout << "\n\n";
cout << "\nArea of Rectangle=" << (l * b);
cout << "\nPerimeter of Rectangle=" << 2*(l + b);
}
};
int main()
{
rectangle r;
r.getarea();
r.showarea();
r.getp();
r.showp();
r.get();
r.show();
return 0;
}
OUTPUT
