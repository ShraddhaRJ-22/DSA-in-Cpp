#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>mystack;
mystack.push(1);
mystack.push(2);
mystack.push(3);
mystack.push(4);
mystack.push(5);
cout<<"Size of stack is:"<<mystack.size()<<endl;
mystack.size();
 mystack.pop();
 while(!mystack.empty())
 {
 cout<<mystack.top()<<endl;
 mystack.pop();
}
return 0;
}

