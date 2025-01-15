/*  C++ Protected Members:

- Like private members, protected members are inaccessible outside of the class.
- However, they can be accessed by derived classes and friend classes/functions.
- We need protected members if we want to hide the data of a class,but still want that
  data to be inherited by its derived classes.
  
  in Class always name of the class should start with Capital Letter.
  
  
<> Difference between private & protected members is that protected allows inheritance.

For a protected members:
                Public Derivation     Public Derivation       Protected Derivation
1. Private       not inheritated       not inheritated        not inheriatated
2. Protected     protected             Private                 Protected             
3. Public        public                Private                 Protected                
*/

#include<iostream>
using namespace std;
// Base Class
class Shape {
protected:
    int width;
    int height;

public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

// Derived Class 
class Rectangle : public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

int main() {
    Rectangle r1;

    // Set width and height
    r1.setWidth(5);
    r1.setHeight(10);

    // Get and display the area
    cout << "The Area of Rectangle is: " << r1.getArea() << endl;
    return 0;
}

