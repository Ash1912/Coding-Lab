//Write a program to create a Test class which is a user defined exception and 
//override the virtual function what() to display a message “Test Exception Handled”.
#include<iostream>
#include<exception>
using namespace std;
class Test :public exception {
	public :
		virtual const char * what() const throw()
		{
			return "Test Exception Handled";
		}
};
int main() {
	try {
		Test t1;
		throw t1;
	}
	catch(exception &e) {
		cout<<e.what()<<endl;
	}
	return 0;
}
