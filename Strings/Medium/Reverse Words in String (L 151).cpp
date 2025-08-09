// Reverse Words in String (Leetcode 151)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
	public:
		string ReverseWords(string s){
			int n = s.length();
			
			string ans = "";
			
			reverse(s.begin(), s.end());
			
			for(int i = 0; i < n; i++){
				string word = "";
				
				while(i < n && s[i] != ' '){
					word += s[i];
					i++;
				}
				
				reverse(word.begin(), word.end());
				
				if(word.length() > 0){
					ans += ' ' + word;
				}
			}
			return ans.substr(1);
		}
};

int main()
{
	Solution sol;
	
	string s = "  the sky   is blue  ";
    cout << sol.ReverseWords(s) << endl; 
    return 0;
}
