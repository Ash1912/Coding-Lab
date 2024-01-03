#define PI 3.14
#include<iostream>
using namespace std;
inline int circle(int r) {
	return PI*r*r;
}
inline int triangle(int b, int h) {
	return 0.5*b*h;
}
int main() {
	cout<<"area of circle is \t"<<PI*4*4<<endl;
	cout<<"area of triangle is \t"<<0.5*4*5<<endl;
	return 0;
}
