#include<iostream>
using namespace std;
int main()
{
int numerator, denominator, result;
cout<<"Enter two numbers for division:"<<endl;
cin>>numerator>>denominator;
try
{
if(denominator==0)
{
throw denominator;
}
else
{
result=numerator/denominator;
}
}
catch(int d)
{
cout<<"You can't enter 0 in denominator while doing division 
operation!"<<endl;
}
cout<<"The Division is:"<<result;
return 0;
}
