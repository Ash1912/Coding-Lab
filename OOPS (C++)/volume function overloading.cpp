#include<iostream>
using namespace std;
class FindVolume {
	public:
		void volume(int r) {
			cout<<"volume of cube is \t"<<r*r*r<<endl;
		}
		void volume(int r,int h) {
			cout<<"volume of cylinder is \t"<<3.14*r*r*h<<endl;
		}
		void volume(double r) {
			cout<<"volume of sphere is \t"<<((4*3.14*r*r*r)/3)<<endl;
		}
};
int main() {
	FindVolume v1;
	v1.volume(3);
	v1.volume(3,4);
	v1.volume(4.50);
	return 0;
}
