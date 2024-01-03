#include <iostream>
using namespace std;

class Grandfather {
	int x;

public:
	
	Grandfather(int i)
	{
		x = i;
		cout <<"Grandfather class constructed"<< endl;
	}
	~Grandfather()
	{
			cout <<"Grandfather class destroyed"<< endl;
	}
};

class Parent : virtual public Grandfather {

public:
	
	Parent(int parent, int x) : Grandfather(x)
	{
		cout <<"Parent class constructed"<< endl;
	}
	~Parent()
	{
		cout <<"Parent class destroyed"<< endl;
	}
};

class Child : public Parent {
	
public:
	
	Child(int parent, int x) : Parent(parent, x), Grandfather(x)
	{
		cout <<"Child class constructed"<< endl;
	}
	~Child()
	{
		cout <<"Child class destroyed"<< endl;
	}
};	

int main()
{
	Child c1(10, 11);
	return 0;
}

