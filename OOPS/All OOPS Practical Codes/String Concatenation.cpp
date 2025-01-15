#include<iostream>
#include<string>
using namespace std;
class Mystring{
string str;
public:
void input(){
cout<<"Enter String: ";
cin>>str;
}
void display()
{
cout<<"Concatenated String: "<<str<<endl;
}
Mystring operator+(Mystring obj)
{
Mystring temp;
temp.str = str + obj.str;
return temp;
}
};
int main()
{
Mystring s1,s2,s3;
s1.input();
s2.input();
s3 = s1 + s2;
s3.display();
return 0;
}

