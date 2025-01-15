/* Encapsulation :
    	Encapsulation helps in organizing and structuring code, enhances security by 
		restricting direct access to internal details, and supports the concept of information 
		hiding in object-oriented programming.
*/
#include<iostream>
using namespace std;
class Car{
	private:
		string brand;
		int year;
	public:
		void setBrand(const string& b) {
			brand = b;
		}	
		string getBrand() const {
			return brand;
		}
		void setYear(int y){
			if(y >= 1886 && y <= 2024){
				year = y;
			}
			else{
				cout<<"Invalid Year!"<<endl;
			}
		}
		
		int getYear() const{
			return year;
		}
		void displayInfo() const{
			cout<<"Car: "<<brand<<", Year: "<<endl;
		}
};
int main()
{
	Car mycar;
	
	mycar.setBrand("Benz");
	mycar.setYear(2021);
	
	// Access private data through public member functions
	cout << "Brand: " << mycar.getBrand() << ", Year: " << mycar.getYear()<<endl;
	mycar.displayInfo();
	
	return 0;
}
