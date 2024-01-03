#include <iostream>
using namespace std;
class Test
{
    int value;

public:
    Test(int num) : value(num) {}
    Test operator++() //pre increment
    {
        Test t(++value);
        return t;
    }
    Test operator--() //pre decrement
    {
        Test t(--value);
        return t;
    }
    Test operator++(int) //post increment
    {
        Test t(value++);
        return t;
    }
    Test operator--(int) //post decrement
    {
        Test t(value--);
        return t;
    }
    void display()
    {
        cout << value;
    }
};
int main()
{
    Test t1(10);
    cout << "Original Value: ";
    t1.display();
    cout << endl
         << "Pre-increment: ";
    Test t2 = ++t1;
    t2.display();
    cout << endl
         << "Pre-decrement: ";
    t2 = --t1;
    t2.display();
    cout << endl
         << "Post-increment: ";
    t2 = t1++;
    t2.display();
    cout << endl
         << "Post-decrement: ";
    t2 = t1--;
    t2.display();
}
