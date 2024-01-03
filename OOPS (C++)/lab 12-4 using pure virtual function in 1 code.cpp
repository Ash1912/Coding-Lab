#include <iostream>
using namespace std;
class shape
{
    public: 
    virtual void area()=0; //pure virtual function
};

class circle: public shape
{
	float r;
    public: 
    void area()
    {
       cout<<"\nEnter radius : ";
       cin>>r;
       cout<<"\nArea of circle : "<<(3.14*r*r)<<endl;
    }
};

class square: public shape
{
	int a;
    public: 
    void area()
    {
       cout<<"\nEnter side of square : ";
       cin>>a;
       cout<<"\nArea of square : "<<(a*a)<<endl;
    }
};

class triangle: public shape
{
	int b,h;
    public: 
    void area()
    {
            cout<<"\nEnter base : ";
            cin>>b;
            cout<<"\nEnter height : ";
            cin>>h;
            cout<<"\nArea of triangle : "<<(0.5*b*h)<<endl;
    }
};

int main()
{
   circle c; // object created
   c.area();
   square s; // object created
   s.area();
   triangle t; // object created
   t.area();
   return 0;
    
}
