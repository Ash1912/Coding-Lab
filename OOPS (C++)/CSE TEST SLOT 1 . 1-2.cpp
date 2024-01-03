#include <iostream>
using namespace std;
class area
{
public:
    inline float triangle(int b, int h);
    inline float rectangle(int l, int w);
    inline float circle(int r);
};
inline float area::triangle(int b, int h)
{
    return 0.50 * b * h;
}
inline float area::rectangle(int l, int w)
{
    return l * w;
}
inline float area::circle(int r)
{
    return 3.14 * r * r;
}
int main()
{
    area a;
    int l, b, h, w, r;
    cout << "Enter the base and height of the triangle :" << endl;
    cin >> b >> h;
    cout << "Enter the length and widdth of the rectangle :" << endl;
    cin >> l >> w;
    cout << "Enter the radius of the circle :" << endl;
    cin >> r;
    cout << "Area of triangle  " << a.triangle(b, h) << endl;
    cout << "Area of rectangle  " << a.rectangle(l, w) << endl;
    cout << "Area of circle  " << a.circle(r) << endl;
    return 0;
}

