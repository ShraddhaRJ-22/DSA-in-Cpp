// Constructor Overloading
#include<iostream>
using namespace std;

class Room{
	private:
		double length;
		double breadth;
	public:
		Room(){     // Constructor with no arguments
			length = 7.5;
			breadth = 5.025;
		}	
		Room(double l,double b){     // Constructor with 2 arguments
			length = l;
			breadth = b;
		}
		Room(double len){       // Constructor with 1 argument
			length = len;
			breadth = 4;
		}
		double calculate_Area(){
			return length*breadth;
		}
};
int main()
{
	Room room1, room2(8.2,6.6), room3(8.2);
	
	cout<<"When no argument is passed: "<<endl;
	cout<<"Area of room is "<<room1.calculate_Area()<<endl;
	cout<<endl;
	
	cout<<"When 2 arguments are passed: "<<endl;
	cout<<"Area of room is "<<room2.calculate_Area()<<endl;
	cout<<endl;
	
	cout<<"When 1 argument is passed: "<<endl;
	cout<<"Area of room is "<<room3.calculate_Area()<<endl;
	
	return 0;
}
