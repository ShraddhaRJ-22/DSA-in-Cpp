#include<iostream>
using namespace std;
class pointer
{
public:
int var=300;
int **pptr;
int *ptr;
void put()
{
ptr=&var;
pptr=&ptr;
}
void show()
{
cout<<"value of variable:"<<var<<endl;
cout<<"value of *ptr:"<<*ptr<<endl;
cout<<"value of **pptr:"<<**pptr<<endl;
}
};
int main() 
{
pointer obj;
obj.put();
obj.show();
return 0;
}

