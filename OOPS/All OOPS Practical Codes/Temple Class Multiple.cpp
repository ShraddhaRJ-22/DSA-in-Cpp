#include<iostream>
using namespace std;
template<class T1, class T2>
class demo{
private:
T1 num1;
T2 num2;
public:
demo(T1 length, T2 breadth)
{
num1=length;
num2=breadth;
}
void area()
{
cout<<"Area of Rectangle:"<<(num1*num2)<<endl;
}
};
int main()
{
demo<int, int>obj1(9,4);
obj1.area();
demo<float, float>obj2(5.2,7.7);
obj2.area();
return 0;
}
