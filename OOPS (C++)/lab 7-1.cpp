#include<iostream>
#include<cstring>
using namespace std;
class Test {
	char *name;
	int length;
	public:
		Test(char *);
		~Test();
		void display() {
			cout<<"Name is\t"<<name<<endl;
		}
	};
		Test::Test(char *n) //dynamic constructor
		{ 
			length=strlen( n );
			name=new char[length+1];
			if(name == NULL)
			cout<<" Memory not allocated ";
			strcpy(name, n);
		}
Test::~Test() //destructor
{ 
	cout<<" Program terminated succesfully "<<endl;
	delete name;
}
int main() {
	Test *name1 = new Test("Ashish");
	name1->display();
	delete name1;
	return 0;
}
