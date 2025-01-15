#include<iostream>
using namespace std;
class Pointer{
public:
int *ptrInt;
float *ptrFloat;
void getdata(){
ptrInt= new int;
ptrFloat= new float;
*ptrInt =45;
*ptrFloat=45.45f;
}
void showdata(){
cout<<"*ptrInt :"<<*ptrInt<<endl;
cout<<"*ptrFloat :"<<*ptrFloat<<endl;
delete ptrInt;
cout<<"*ptrInt :"<<*ptrInt<<endl;
delete ptrFloat;
cout<<"*ptrFloat :"<<*ptrFloat<<endl;
}
};
int main()
{
Pointer p;
p.getdata();
p.showdata();
return 0;
}
