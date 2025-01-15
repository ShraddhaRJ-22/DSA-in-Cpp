#include<iostream>
#include<iterator>
#include<list>>
using namespace std;
// function for printing the elements in a list
void printlist(list<int> l)
{
list<int>::iterator itr;
for (itr = l.begin(); itr != l.end(); ++itr)
cout << *itr<<" ";
cout<<endl;
}
int main()
{
list<int> testlist;
for (int i = 0; i < 8; i++) {
testlist.push_back(i * 3);
testlist.push_front(i * 4);
}
cout << "\nList is : ";
printlist(testlist);
cout << "\nlist.front() : " << testlist.front();
cout << "\nlist.back() :" << testlist.back(); 
cout << "\nlist.pop_front() : ";
testlist.pop_front();
printlist(testlist);
cout << "\nlist.pop_back() : ";
testlist.pop_back();
printlist(testlist);
cout << "\list.reverse() : ";
testlist.reverse();
printlist(testlist);
cout << "\nlist.sort(): ";
testlist.sort();
printlist(testlist);
return 0;
}
