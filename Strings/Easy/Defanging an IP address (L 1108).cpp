// Defanging an IP address (Leetcode 1108)
#include<iostream>
#include<string>
using namespace std;

string DefangIPadr(string address)
{
	int index = 0;
	string ans;
	
	while(index < address.size()){
		if(address[index] == '.'){
			ans += "[.]";
			index ++;
		}
		else{
			ans += address[index];
			index ++;
		}
	}
	return ans;
}
int main()
{
	string Ip;
	cout<<"Enter IP Address: ";
	cin>>Ip;
	
	string defanged = DefangIPadr(Ip);
	
	cout<<"Defanged IP Adress: "<<defanged;
	
	return 0;
}
