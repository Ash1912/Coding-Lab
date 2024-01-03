//1.Write a program to restrict user to throw only integer and character type exception. 
//If user try to throw other than int and char type exceptions then the program has to terminate even their catch blocks are present 
//along with try block.
#include<iostream>
using namespace std;
class Test {
	public :
		int print(int x) throw(int, char)
		{//exception specification
		if(x == 0) {
			throw 3;
		}
		if(x == 1) {
			throw 'c';
		}
		if(x == 2) {
			throw 6.7;
		}
		}
};
int main() {
	try {
		Test t1;
		t1.print(2);
	}
	catch(int x) {
		cout<<"Integer Exception Handled"<<endl;
	}
	catch(char x) {
		cout<<"Character Exception Handled"<<endl;
	}
	catch(double x) {
		cout<<"Double Exception Handled"<<endl;
	}
	return 0;
}

