// Print all Elements
#include<iostream>
using namespace std;
int main()
{
	int marks[] = {10, 20, 30, 60};
	int size = sizeof(marks)/sizeof(int);
	
	for(int i = 0; i < size; i++){
		cout<<marks[i]<<endl;
	}
	return 0;
}
