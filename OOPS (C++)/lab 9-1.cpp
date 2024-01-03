#include<iostream>
using namespace std;
class X {
	public:
		void display() {
			cout<<"In class X \t"<<endl;
		}
};
class Y {
	public:
		void show() {
			cout<<"In class Y \t"<<endl;
		}
};
class Z {
	X obj1;
	Y obj2;
	public:
		void test() {
			obj1.display();
			obj2.show();
		}
};
int main()
{
	Z z1;
	z1.test();
	return 0;
}
