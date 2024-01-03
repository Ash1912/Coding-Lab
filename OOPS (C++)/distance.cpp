#include <iostream>
using namespace std;
class dist
{
public:
    int feet;
    int inches;
    void correct()
    {
        if (inches >= 12)
        {
            feet += inches / 12;
            inches %= 12;
        }
    }
    void add(dist d1, dist d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        correct();
    }
};
int main()
{
    dist c1, c2, c3;
    cout << "Enter the two distances:" << endl
         << "Distance 1 -\nfeet: ";
    cin >> c1.feet;
    cout << "inches : ";
    cin >> c1.inches;
    c1.correct();
    cout << "Distance 2 -\nfeet: ";
    cin >> c2.feet;
    cout << "inches: ";
    cin >> c2.inches;
    c2.correct();
    c3.add(c1, c2);
    cout << endl
         << "Distance 1 - " << c1.feet << " feet " << c1.inches << " inches " << endl
         << "Distance 2 - " << c2.feet << " feet " << c2.inches << " inches " << endl;
    cout << "The sum of the distances: " << c3.feet << " feet " << c3.inches << " inch(es)";
    return 0;
}
