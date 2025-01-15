#include<iostream> using 
namespace std; 
class test{ 
public: 
test() 
{ 
int n=10; 
cout<<n<<endl; 
} 
~test() 
{ 
cout<<"Object Destroyed!"; 
} 
}; 
int main() 
{ 
test obj; return 0; 
} 

