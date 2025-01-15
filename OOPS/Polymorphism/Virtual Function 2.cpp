// Virtual Function using Destructor (~)
#include<iostream>
using namespace std;
// Base class
class Vehicle{
	public:
		virtual void start(){
			cout<<"starting a Vehicle"<<endl;
		}
		
		virtual ~Vehicle() {
			cout<<"Vehicle destructor called"<<endl;
		}
};
// Derived class 1
class Car: public Vehicle{
	public:
		void start() override{
			cout<<"starting a car"<<endl;
		}
		~Car(){
			cout<<"Car destructor called"<<endl;
		}
};
// Derived class 2
class Truck: public Vehicle{
	public:
		void start() override{
			cout<<"starting a Truck"<<endl;
		}
		~Truck(){
			cout<<"Truck destructor called"<<endl;
		}
};
int main()
{
	// Using polymorphism with a base class pointer
    Vehicle* vehiclePtr = new Car();

    // Calls the overridden function in Car
    vehiclePtr->start();

    // Release allocated memory using delete
    delete vehiclePtr;

    // Using polymorphism with another derived class
    vehiclePtr = new Truck();

    // Calls the overridden function in Bicycle
    vehiclePtr->start();

    // Release allocated memory using delete
    delete vehiclePtr;

    return 0;
}
