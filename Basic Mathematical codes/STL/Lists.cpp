#include<iostream>
using namespace std;

void explainList()
{
	list<int> ls;
	
	ls.push_back(2);
	ls.emplace_back(4);
	
	ls.push_front(5);
	ls.emplace_fornt(); {2, 4};
	
	// other functions are also there such as :
	// begin, end, rbegin, rend, rend, clear, insert, size, swap
}
int main()
{
	explainlists();
	return 0;
}

