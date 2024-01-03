#include <iostream>
using namespace std;
class Test
{
    int value;

public:
    Test(int num) : value(num) {}
    friend Test operator++(Test &op)
    {
        Test t(++op.value);
        return t;
    }
    friend Test operator--(Test &op)
    {
        Test t(--op.value);
        return t;
    }
    friend Test operator++(Test &op, int)
    {
        Test t(op.value++);
        return t;
    }
    friend Test operator--(Test &op, int)
    {
        Test t(op.value--);
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
