#include<iostream>
using namespace std;
template<typename T1,typename T2>
T1 add(T1 num1,T2 num2)
{
 return(num1+num2);
}
template<typename s1,typename s2>
s1 sub(s1 num1,s2 num2)
{
 return(num1-num2);
}
template<typename m1,typename m2>
m1 mul(m1 num1,m2 num2)
{
 return(num1*num2);
}
template<typename d1,typename d2>
d1 div(d1 num1,d2 num2)
{
 return(num1/num2);
}
int main()
{
 int add1,sub1,mul1,div1;
 double add2,sub2,mul2,div2;
 
 add1=add<int,int>(30,20);
 cout<<"Integer Value Addition:"<<add1<<endl;
 
 add2=add<float,float>(20.5,1.7);
 cout<<"Float Value Addition:"<<add2<<endl<<endl;
 
 sub1=sub<int,int>(30,20);
 cout<<"Integer Value Substraction:"<<sub1<<endl;
 
 sub2=sub<float,float>(50.6,1.7);
 cout<<"Float Value Substraction:"<<sub2<<endl<<endl;
 
 mul1=mul<int,int>(30,20);
 cout<<"Integer Value Multiplication:"<<mul1<<endl;
 
 mul2=mul<float,float>(20.5,1.7);
 cout<<"Float Value Multiplication:"<<mul2<<endl<<endl;
 
 div1=div<int,int>(90,30);
 cout<<"Integer Value Division:"<<div1<<endl;
 
 div2=div<float,float>(30.5,1.7);
 cout<<"Float Value Division:"<<div2<<endl;
 return 0;
}
