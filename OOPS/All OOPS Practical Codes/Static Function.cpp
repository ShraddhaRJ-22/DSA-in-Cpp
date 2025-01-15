#include<iostream> using 
namespace std; class 
new1{ 
float f; 
static int a; 
public: void getdata(floatx{ 
f = x; 
} 
void showdata(){ 
cout<<"f:"<<f<<endl; 
cout<<"a:"<<a++<<endl; 
} 
static float new2() { 
a = a+1; 
cout<<"a:"<<a<<endl; 
} 
}; 
int new1::a; int 
main() 
{ 
new1 obj; 
obj.getdata(12.6); 
obj.showdata(); 
new1::new2(); 
obj.showdata(); return 
0; 
} 

