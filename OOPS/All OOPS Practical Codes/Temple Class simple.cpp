#include<iostream>
using namespace std;
template <class T>
class demo{
private:
T num;
public:
demo(T n1)
{
num=n1;
}
void check()
{
if(num%2==0)
{
cout<<"Number is Even!";
}
else
{
cout<<"Number is Odd!";
}
}
};
int main()
{
demo<int>obj1(6);
obj1.check();
cout<<endl;
demo<int>obj2(19);
obj2.check();
return 0;
}
