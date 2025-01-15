#include<iostream>
using namespace std;
class base
{
public:
virtual void display()
{
cout << "Base Display()" << endl;
}
};
class derived : public base
{
public:
void display()
{
cout << "Derived Display()" << endl;
}
};
int main()
{
base *ptr;
derived d1;
base b1;
ptr = &b1;
ptr -> display();
ptr = &d1;
ptr -> display();
return 0;
}

