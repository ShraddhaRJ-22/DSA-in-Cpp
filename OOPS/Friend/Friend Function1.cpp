/* Friend Function:
            -> It allows access to private function
  
 
Properties:   1) Not in scope of class
              2) Cannot be called from object of that class
              3) Can be invoked without the help of any object
              4) Usually Contains the arguments as objects
              5) Can be declared in both public & Private
*/
#include<iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex p1, Complex p2);

    void printnumber() {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex p1, Complex p2) {
    Complex p3;
    p3.setNumber((p1.a + p2.a), (p1.b + p2.b));
    return p3;
}

int main() {
    Complex c1, c2, sum;

    // Set numbers for c1
    c1.setNumber(3, 4);
    cout << "First complex number: ";
    c1.printnumber();

    // Set numbers for c2
    c2.setNumber(5, 6);
    cout << "Second complex number: ";
    c2.printnumber();

    // Sum the complex numbers
    sum = sumComplex(c1, c2);
    cout << "Sum of complex numbers: ";
    sum.printnumber();

    return 0;
}

