#include<iostream>
using namespace std;
class stroperation
{
private:
char str[50],swap;
 int i,len,j;
 public:
 void getdata()
 {
 cout<<"Enter string:";
 cin>>str;
}
void putdata()
{
for(j=0;str[j]!='\0';j++);
for(len=0;str[len];len++);
 for(i=0;i<len/2;i++)
 {
 swap=str[i];
 str[i]=str[len-1-i];
 str[len-i-1]=swap;
 }
}
void showdata()
{
 cout<<"Length of string is:"<<j<<endl;
 cout<<"Reverse string is:"<<str<<endl;
 
}
};
int main()
{
	stroperation s;
    s.getdata();
    s.putdata();
    s.showdata();
    return 0;
}

