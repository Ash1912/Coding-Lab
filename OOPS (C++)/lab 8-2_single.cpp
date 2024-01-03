//single inheritance
#include<iostream>
using namespace std;
class Base {
	public :
		Base() {
			cout<<"Base class constructed \t"<<endl;
		}
		~Base() {
			cout<<"Base class destroyed \t"<<endl;
		}
};
class Derived : public Base {
	public:
		Derived() {
			cout<<"Derived class constructed \t"<<endl;
		}
		~Derived() {
			cout<<"Derived class destroyed \t"<<endl;
		}
};
int main() {
	Derived d1;
	return 0;
}
