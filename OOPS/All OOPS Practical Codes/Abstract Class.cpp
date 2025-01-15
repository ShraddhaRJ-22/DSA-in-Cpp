#include<iostream>
using namespace std;
class shape
{
protected:
int width;
int height;
public:
virtual int area() =0; 
void setwidth(int w)
{
width = w;
}
void setheight(int h)
{
height = h;
}
};
class rectangle:public shape
{
public:
int area()
{
return (width*height);
}
};
class triangle:public shape
{
public:
int area()
{
return ((width*height)/2);
}
};
int main()
{
rectangle r;
triangle t;
r.setwidth(2);
r.setheight(11);
t.setwidth(12);
t.setheight(6);
cout << "Area of Rectangle=" << r.area() << endl;
cout << "Area of Triangle=" << t.area() << endl;
}
