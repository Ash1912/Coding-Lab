#include<iostream>
using namespace std;
class Test{
    public:
    int a,b;
    Test(int x,int y){
        a=x;
        b=y;
    }
    operator int(){
        cout<<"|| Class Type to Basic Type Conversion ||"<<endl; 
        return(a*10+b);
    }
};
int main(){
    int a,b,x;
    cout<<"Enter a value: ";
    cin>>a;
    cout<<"Enter b value: ";
    cin>>b;
    Test t(a,b);
    x=t;
    cout<<"Through class type to basic type value of t is "<<x;
}
