#include<iostream>
using namespace std;
class employee
{
public:
int id;
string name;
float salary;
employee(int id, string name, float salary)
{
this->id=id;
this->name=name;
this->salary=salary;
}
void display()
{
cout<<"id:"<<id<<"\t Name:"<<name<<"\t Salary:"<<salary<<endl;
}
};
int main()
{
employee e1= employee(1,"John",70000);
employee e2= employee(2,"David",75000);
 e1.display();
 e2.display();
 return 0;
}

