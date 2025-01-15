#include<iostream>
#include<cmath>
using namespace std;

class Shape {
public:
    float calculateArea(){
    	return 0;
	} 
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float calculateArea() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float calculateArea() {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float calculateArea() {
        return 0.5 * base * height;
    }
};

class Square : public Shape {
private:
    float side;

public:
    Square(float s) : side(s) {}

    float calculateArea() {
        return side * side;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 8.0);
    Square square(5.0);

    cout << "Area of Circle: " << circle.calculateArea() <<endl;
    cout << "Area of Rectangle: " << rectangle.calculateArea() <<endl;
    cout << "Area of Triangle: " << triangle.calculateArea() <<endl;
    cout << "Area of Square: " << square.calculateArea() <<endl;

    return 0;
}
