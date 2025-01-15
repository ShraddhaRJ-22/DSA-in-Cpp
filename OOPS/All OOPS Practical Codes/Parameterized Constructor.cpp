#include<iostream>
using namespace std;
class emp
{
public:
string name;
int id;
float salary;
emp(int i, string n, float s)
{
id = i;
name = n;
salary = s;
}
void display()
{
cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<endl;
}
};
int main()
{
emp e1 = emp(32, "Ankita", 50000);
emp e2 = emp(27, "Vaidehi", 60000);
emp e3 = emp(34, "Pranali", 55000);
e1.display();
e2.display();
e3.display();
}

