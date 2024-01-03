#include<iostream>
using namespace std;
class Test{
    public:
    int a,b;
    Test(){}
    void operator=(int t){
     a=t*10;
     b=t/10;
    }
    void display(){
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    }
};
int main(){
    int x;
    cout<<"Enter a value: ";
    cin>>x;
    Test t1;
    t1=x;
    t1.display();
}
