#include<iostream>
using namespace std;
class Area{
    double a;
    public:
    Area(int r){
    a=3.14*r*r;
    }
	 Area(double b,double h){
     a=0.5*b*h;
    }
    Area(int l,int w){
        a=l*w;
    }
    void display(){
        cout<<"The area is: "<<a<<endl;
    }
};
int main(){
    Area circle(3);
    circle.display();
    Area triangle(5.0,8.0);
    triangle.display();
    Area rectangle(2,5);
    rectangle.display();
    
}
