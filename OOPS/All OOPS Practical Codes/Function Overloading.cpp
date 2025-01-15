#include<iostream>
using namespace std;
class A
{
public:
void display()
{
cout << "\nBase Class..";
}
};
class B:public A
{
public:
void display()
{
cout << "Derived Class..";
//A::display();
}
};
int main()
{
B obj;
obj.display();
obj.A::display();
return 0;
}

