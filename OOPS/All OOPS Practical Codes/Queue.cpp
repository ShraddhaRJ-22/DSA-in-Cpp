#include<iostream>
#include<queue>
using namespace std;
int main()
{
queue<string>myQueue;
myQueue.push("Hey!");
myQueue.push("Myself ");
myQueue.push("Srushti");
cout<<"The size of queue:"<<myQueue.size()<<endl;
myQueue.size();
cout<<"\nFront :"<<myQueue.front()<<" "<<endl;
cout<<"Back:"<<myQueue.back()<<" "<<endl;
cout<<"\nQueue:"<<endl;
 while(!myQueue.empty())
 {
 myQueue.pop();
 cout<<myQueue.front()<<" "<<endl;
}
cout<<endl;
return 0;
}

