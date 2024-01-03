#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,b;
    double div;
    cout<<"The value of a and b is: ";
    cin>>a;
    cin>>b;
    div=a/b;
    cout<<"The div of a and b is: "<<div<<endl;
    cout<<"The precision upto 3 values: "<<setprecision(3)<<div<<endl;
    cout<<"The precision upto 5 values: "<<setprecision(5)<<div<<endl;
    cout<<"The output with width 10 is: "<<setw(10)<<div<<endl;
    cout<<"The output with width 30: "<<setw(30)<<div;

}
