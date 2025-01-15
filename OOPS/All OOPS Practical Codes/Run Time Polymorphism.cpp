#include<iostream>
using namespace std;
class A
{
public:
string colour = "Green";
};
class B:public A
{
public:
string colour = "White";
};
int main()
{
A a = B();
cout << "colour:" << a.colour << endl;
B b = B();
cout << "colour:" << b.colour << endl;
return 0;
}

