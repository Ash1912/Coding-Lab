#include<iostream>
#define PI 3.14
using namespace std;
class shapes{
    public:
    float a;
};
class circle:public shapes{
    float r;
    public:
    float area(float r){
        a=PI*r*r;
        return a;
    }
};
class triangle:public shapes{
    float b,h;
    public:
    float area1(float b,float h){
        a=0.5*b*h;
        return a;
    }
};
class rectangle:public shapes{
    float l,br;
    public:
    float area2(float l,float br){
        a=l*br;
        return a;
    }
};
int main(){
    circle c;
    triangle t;
    rectangle re;
    cout<<"Area of circle is: "<<c.area(4.0)<<endl;
    cout<<"Area of triangle is: "<<t.area1(3,4)<<endl;
    cout<<"Area of rectangle is: "<<re.area2(5,6);
}
