// Memory Allocation
#include<iostream>
using namespace std;
class shop
{
	int item_id[100];
	int item_price[100];
	int counter;
	public:
		void initcounter(void) { counter = 0;}
		void getitem(void);
		void showitem(void);
};

void shop :: getitem(void)
{
	cout<<"Enter ID of your item "<<counter+1<<endl;
	cin>>item_id[counter];
	cout<<"Enter Price:";
	cin>>item_price[counter];
	counter ++;	
}

void shop :: showitem(void)
{
	for(int i=0;i<counter;i++)
	{
		cout<<"The Price of Item with Id"<<item_id[i]<<"is"<<item_price[i]<<endl;
	}
}

int main()
{
	shop dukaan;
	dukaan.initcounter();
	dukaan.getitem();
	dukaan.getitem();
	dukaan.getitem();
	dukaan.showitem();
	
	return 0;
}
