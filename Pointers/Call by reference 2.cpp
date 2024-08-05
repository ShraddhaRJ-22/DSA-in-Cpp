// Find the 1st & Last index of given String
#include<iostream>
using namespace std;

void first_last_index(string s, char ch, int *first, int *last){
	for(int i=0;i<s.size();i++){
		if(s[i] == ch){
			*first = i;
			break;
		}	
	}
	
	for(int i=s.size() - 1; i>=0;i--){
		if(s[i] == ch){
			*last = i;
			break;
		}
	}
}

int main()
{
	string s = "rabacad";
	char ch = 'a';
	int first = -1;
	int last = -1;
	
	int *pf = &first;
	int *pl = &last;
	
	first_last_index(s, ch, pf, pl);
	
	cout<<first<<" "<<last<<endl;;
	cout<<*pf<<" "<<*pl<<endl;
	
	return 0;
}
