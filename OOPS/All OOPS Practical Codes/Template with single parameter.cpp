#include<iostream>
using namespace std;
template<typename T>
T add(T num1,T num2, T num3)
{
 return(num1+num2+num3);
}
template<typename T1>
T1 sub(T1 num1,T1 num2, T1 num3)
{
 return(num1-num2-num3);
}
template<typename T2>
T2 mul(T2 num1,T2 num2, T2 num3)
{
 return(num1*num2*num3);
}
template<typename T3>
T3 div(T3 num1,T3 num2)
{
 return(num1/num2);
}
int main()
{
 int add1,sub1,mul1,div1;
 double add2,sub2,mul2,div2;
 
 add1=add<int>(40,80,10);
 cout<<"Integer Value Addition:"<<add1<<endl;
 
 add2=add<float>(20.5,4.2,1.4);
 cout<<"Float Value Addition:"<<add2<<endl<<endl;
 
 sub1=sub<int>(40,80,10);
 cout<<"Integer Value Substraction:"<<sub1<<endl;
 
 sub2=sub<float>(50.6,18.7,1.5);
 cout<<"Float Value Substraction:"<<sub2<<endl<<endl;
 
 mul1=mul<int>(40,80,3);
 cout<<"Integer Value Multiplication:"<<mul1<<endl;
 
 mul2=mul<float>(20.5,4.2,2.4);
 cout<<"Float Value Multiplication:"<<mul2<<endl<<endl;
 
 div1=div<int>(40,20);
 cout<<"Integer Value Division:"<<div1<<endl;
 
 div2=div<float>(20.5,4.2);
 cout<<"Float Value Division:"<<div2<<endl<<endl;
 return 0;
}

