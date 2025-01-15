#include<iostream>
using namespace std;
class Value{
int a,b,c;
public:
void getdata(int x,int y,int z);
void operator-();
void showdata();
};
void Value :: getdata(int x,int y,int z)
{
a = x;
b = y;
c = z;
}
void Value :: operator-()
{
a = -a;
b = -b;
c = -c;
}
void Value :: showdata()
{
cout<<"a: "<<a<<endl;
cout<<"b: "<<b<<endl;
cout<<"c: "<<c<<endl;
cout<<endl;
}
int main()
{
Value obj;
obj.getdata(12,9,22);
obj.showdata();
-obj;
obj.showdata();
return 0;
}

