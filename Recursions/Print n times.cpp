// Print name n times
#include<iostream>
using namespace std;
void f(int i, int n)
{
    if(i > n) return;
    cout<<"Shraddha"<<endl;
    f(i + 1, n);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    f(1, n);
    return 0;
}

