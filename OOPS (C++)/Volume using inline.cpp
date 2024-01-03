#define PI 3.14
#include<iostream>
using namespace std;
class FindVolume {
	public:
		inline int cube(int r) {
		             return r*r*r;
		}
		inline float cylinder(int r,int h) {
			return PI*r*r*h;
		}
		inline float sphere(float r) {
			return (4*PI*r*r*r)/3;
		}
};
int main() {
	FindVolume v,v1,v2;
	cout<<"The volume of cube is: "<<v.cube(3)<<endl;
	cout<<"The volume of cylinder is: "<<v1.cylinder(3,4)<<endl;
	cout<<"The volume of sphere is: "<<v2.sphere(4.50);
	return 0;
}
