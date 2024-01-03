#include <iostream>
using namespace std;
class shape
{
    public: 
    float virtual area(){}
};

class circle: public shape
{
    public: 
    float area()
    {
        return 3.14*4*4;
    }
};

class square: public shape
{
    public: 
    float area()
    {
        return 5*5;
    }
};

class triangle: public shape
{
    public: 
    float area()
    {
        return 0.5*10*20;
    }
};

int main()
{
    shape *sh;
    circle c;
    cout<<"Pointing pointer sh of class shape to object of class CIRCLE"<<endl;
    sh=&c;
    cout<<"Area of circle with radius 4 units is "<<sh->area()<<endl;
    square s;
    cout<<"Pointing pointer sh of class shape to object of class SQUARE"<<endl;
    sh=&s;
    cout<<"Area of square with side 5 units is "<<sh->area()<<endl;
    triangle t;
    cout<<"Pointing pointer sh of class shape to object of class TRIANGLE"<<endl;
    sh=&t;
    cout<<"Area of triangle with base 10 units and height 20 units is "<<sh->area()<<endl;
}
