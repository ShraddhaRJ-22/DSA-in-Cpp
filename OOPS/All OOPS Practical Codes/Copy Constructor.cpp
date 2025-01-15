Input:
#include<iostream>
using namespace std;
class demo
{
private:
int num1, num2;
public:
demo(int n1, int n2)
{
num1 = n1;
num2 = n2;
}
void display()
{
cout<<"num1="<<num1<<endl;
cout<<"num2="<<num2<<endl;
}
};
int main()
{
demo ob1(10, 50);
demo ob2 = ob1;
ob1.display();
ob2.display();
return 0;
}

