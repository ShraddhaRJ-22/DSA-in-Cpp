#include<iostream> using 
namespace std; class 
new1{ 
public: 
int&fun(int&x) 
{ 
cout<<"b:"<<x<<endl<<"Address of b:"<<&x; 
} 
}; 
int main() 
{ 
int a = 10; 
int &b = a; 
new1 obj; 
cout<<obj.fun(b); 
return 0; 
}
