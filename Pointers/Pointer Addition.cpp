// Pointer Addition
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin>>x>>y;
	
	int *ptrx = &x;
	int *ptry = &y;
	
	int result;
	
	int *ptr_result = &result;
	
	// Sum
	*ptr_result = *ptrx + *ptry;
	cout<<result;
	
	return 0;
}
