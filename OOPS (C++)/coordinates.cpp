#include <iostream>
#include <cmath>
using namespace std;
class point
{
public:
    int x, y;
};
int main()
{
    point p1, p2;
    cout << "Point 1 -\nX: ";
    cin >> p1.x;
    cout << "Y: ";
    cin >> p1.y;
    cout << "\nPoint 2 -\nX: ";
    cin >> p2.x;
    cout << "Y: ";
    cin >> p2.y;
    cout << "Distance between 1 and 2: "
         << (float)sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}
