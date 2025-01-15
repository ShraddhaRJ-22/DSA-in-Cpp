// Virtual Function
/* 

In C++, overriding refers to the ability of a derived class to provide a specific 
implementation for a function that is already declared in its base class.

*/ 
#include<iostream>
using namespace std;
// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }

    void non_vf() {
        cout << "Non-Virtual Function in the base class" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    Shape shape;
    Circle circle;
    Square square;

    Shape* polymorphic_shape;

    polymorphic_shape = &circle;
    polymorphic_shape->draw();

    polymorphic_shape = &square;
    polymorphic_shape->draw();

    polymorphic_shape->non_vf();

    return 0;
}

