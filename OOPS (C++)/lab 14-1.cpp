//1. WAP to throw and handle ‘division by zero’ exception with multiple catch and catch all blocks. 
#include <iostream>
using namespace std;
int main() {
	int x=10, y=0, z;
	try {
		if(y == 0)
		throw y;
		else {
			z = x/y;
			cout<<"\nz value is \t"<<z<<endl;
		}
	}
	catch(char x) {
		cout<<"\nException Caught"<<x<<endl;
	}
	catch(int y) {
		cout<<"\nException Caught divide by zero exception \t"<<x<<endl;
	}
	return 0;
}

