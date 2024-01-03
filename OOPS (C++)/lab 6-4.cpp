#include <iostream>
using namespace std;
class demo {
    int object_No;
    static int object_Count;
  
public:
    demo()
    {
    object_No = ++object_Count;
    }
    ~demo()
    {
    --object_Count;
    }
    void showObjNumber(void)
    {
        cout << "Object number is :" << object_No << "\n";
    }
    static void showObjCount(void)
    {
        cout << "Count is :" << object_Count<< "\n";
    }
};
int demo::object_Count;
int main()
{
    demo d1, d2;
    demo::showObjCount();
    demo d3;
    demo::showObjCount();
    d1.showObjNumber(); 
    d2.showObjNumber(); 
    d3.showObjNumber();
    return 0;
}
