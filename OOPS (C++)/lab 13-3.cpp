#include <iostream>
using namespace std;

template <class T, class U, class V>
void display(T x, U y, V z)
{
    cout<<"x value is \t: "<<x<<endl;
    cout<<"y value is \t: "<<y<<endl;
    cout<<"z value is \t: "<<z<<endl;
}

int main()
{
    display <int, double, float> (20, 30.99, 5.6f);
    display <double, int, char>  (4.56666, 34, 'X');
    display(4.6666, 'K', 4.5f);
    return 0;
}
