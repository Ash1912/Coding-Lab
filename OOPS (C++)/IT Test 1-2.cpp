#include <iostream>
using namespace std;
class volume
{
public:
    inline float cube(int a, int b, int c);
    inline float cylinder(int r, int h);
    inline float sphere(int r);
};
inline float volume::cube(int a, int b, int c)
{
    return a * b * c;
}
inline float volume::cylinder(int r, int h)
{
    return 3.14 * r * r * h;
}
inline float volume::sphere(int r)
{
    return 1.333 * 3.14 * r * r * r;
}
int main()
{
    volume v;
    int r, b, h, a;
    cout << "Enter the edge of a cube" << endl;
    cin >> a;
    cout << "Enter the radius and height of the cylinder" << endl;
    cin >> b >> h;
    cout << "Enter the radius of the sphere" << endl;
    cin >> r;
    cout << "Volume of cube  " << v.cube(a, a, a) << endl;
    cout << "Volume of cylinder  " << v.cylinder(b, h) << endl;
    cout << "Volume of sphere  " << v.sphere(r) << endl;
    return 0;
}

