#include<iostream>
using namespace std;
class temp 
{
 int x, y, q;
 public:
 void input() 
{
 cout << "Enter Two Numbers :";
 cin >> x>>y;
}
friend void swap(temp &t);
void display() 
{
 cout << "Before Swap x is :" << x <<endl;
 cout << "Before Swap y is :" << y <<endl;
 cout << "After Swap x is :" << x <<endl;
 cout << "After Swap y is :" << y <<endl;
}
};
void swap(temp &t) 
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main() 
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}
