#include<iostream>
using namespace std;
class construct
{
public:
int a, b;
construct()
{
a = 20;
b = 50;
}
};
int main()
{
construct c;
cout<<"a:"<<c.a<<endl<<"b:"<<c.b<<endl;
return 0;
}
