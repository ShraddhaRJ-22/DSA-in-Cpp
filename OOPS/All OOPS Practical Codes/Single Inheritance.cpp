#include<iostream>
using namespace std;
class student_info
{
char name[50];
int roll_no;
char branch[50];
char blood[10];
public:
void getdetails()
{
cout << "Enter your Name:";
cin >> name;
cout << "Enter your Roll No.:";
cin >> roll_no;
cout << "Enter your Branch:";
cin >> branch;
cout << "Enter your Blood Group:";
cin >> blood;
}
void showdetails()
{
cout << "\n\n";
cout <<"Name:" << name << endl;
cout <<"Roll No.:" << roll_no << endl;
cout <<"Branch:" << branch << endl;
cout <<"Blood Group:" << blood << endl;
}
};
class stu_result : public student_info
{
int sub1, sub2, total;
float per;
public:
void get()
{
cout <<"\nEnter marks for Subject1:";
cin >> sub1;
cout << "Enter marks for Subject2:";
cin >> sub2;
total = (sub1+sub2);
per = total/2;
cout << "\nTotal=" << total <<endl;
}
void show()
{
cout << "Subject1=" << sub1 <<endl;
cout << "Subject2=" << sub2 <<endl;
cout << "Total=" << total <<endl;
cout << "Percentage=" << per <<endl;
if(per > 40)
{
cout <<"Pass";
}
else
{
cout << "Fail";
}
}
};
int main()
{
stu_result s1;
s1.getdetails();
s1.showdetails();
s1.get();
s1.show();
return 0;
}

