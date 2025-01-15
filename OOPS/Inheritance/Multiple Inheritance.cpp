// Multiple Inheritance: A C++ class can inherit members from more than one class.
#include<iostream>
using namespace std;

class Student{
	protected:
		int roll_no;
	public:
	    void set_roll_no(int);
		void get_roll_no(void);	
};
void Student :: set_roll_no(int n){
	roll_no = n;
}
void Student :: get_roll_no(){
	cout<<"The roll no is: "<<roll_no<<endl;
}

class Exam: public Student{
	protected:
		float maths;
		float physics;
		public:
			void set_mks(float,float);
			void get_mks(void);
};

void Exam :: set_mks(float m1,float m2){
        	maths=m1;
        	physics=m2;
}

void Exam :: get_mks(){
	cout<<"The marks Obtained in maths are "<<maths<<endl;
	cout<<"The marks Obtained in physics are "<<physics<<endl;
}

class Result : public Exam{
	float percent;
	float avg;
	public:
		void display(){
			get_roll_no();
			get_mks();
			avg=(maths+physics)/2;
			cout<<"Your Percent is "<<avg<<endl;
		}
};

int main()
{
	Result r;
	r.set_roll_no(16);
	r.set_mks(10.0,20.0);
	r.display();
	
	return 0;
}







