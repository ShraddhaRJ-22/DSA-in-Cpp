#include<iostream> 
using namespace std; 
class z{ 
int res; 
public: 
void add(int a, int b, int c=10){ 
res = a + b + c; 
} 
void display(){ 
cout<<"Result:"<<res<<endl; 
} }; 
int main(){ 
z ob1, ob2, ob3; 
ob1.add(17, 20); 
ob2.add(25, 15); 
ob3.add(13, 20, 19); 
ob1.display(); 
ob2.display(); 
ob3.display(); return 0; 
}
