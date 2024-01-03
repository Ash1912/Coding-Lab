//hiearchial inheritance
#include <iostream>
using namespace std;
class base
{
public:
base()
{
cout << "Constructing base\n";
}
~base()
{
cout << "Destructing base\n";
}
};
class derived1 : public base
{
public:
derived1()
{
cout << "Constructing derived1\n";
}
~derived1()
{
cout << "Destructing derived1\n";
}
};
class derived2: public base
{
public:
derived2()
{
cout << "Constructing derived2\n";
}
~derived2()
{
cout << "Destructing derived2\n";
}
};
int main()
{
derived1 d1;
derived2 d2;
return 0;
}
