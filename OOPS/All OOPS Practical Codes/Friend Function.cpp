#include<iostream> using 
namespace std; 
class value{ 
float a, b; 
public: 
value1(float x, float y) 
{ 
a = x; 
b = y; 
} 
friend value add(value obj); 
void print() 
{ 
cout<<"First value:"<<a<<endl; 
cout<<"Second value:"<<b<<endl; 
} 
}; 
value add(value obj) 
{ 
cout<<obj.a+obj.b; 
} 
int main() 
{ 
value v; 
v.value1(20.6, 12.8); 
v.print(); 
cout<<"Addition of two value:"; 
add(v); 
return 0; 
} 

