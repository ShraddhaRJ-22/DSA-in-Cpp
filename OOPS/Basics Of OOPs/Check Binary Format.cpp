// Nesting of Member Functions
// Binary Format
#include<iostream>
#include<string.h>
using namespace std;

class binary{
	string s;
	int i;
	public:
		void read(void);
		void check_bin(void);
		void ones_comp(void);
		void display(void);
};

void binary :: read(void){
	cout<<"Enter a Binary Number:"<<endl;
	cin>>s;
}

void binary :: check_bin(void){
	for(int i=0;i < s.length(); i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"Incorrect Binary format"<<endl;
			exit(0);
		}
	}
}

void binary :: ones_comp(void)
{
	for(int i=0;i<s.length();i++){
		if(s.at(i) =='0'){
		s.at(i) = '1';
	}
	else{
		s.at(i) = '0';
	}
	}
}

void binary :: display(void)
{
	cout<<"Displaying Complement:"<<endl;
	for(int i=0; i<s.length(); i++)
	{
		cout<<s.at(i)<<endl;
	}
}
int main()
{
	binary b;
	b.read();
	b.check_bin();
	b.ones_comp();
	b.display();
	
	return 0;
}
