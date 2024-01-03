#include<iostream>
using namespace std;
template<class T>
void f(T x,T y){
    cout<<"Print Template"<<endl;
    cout<<"x and y values are \t"<<x<<"\t"<<y<<endl;
}
void f(int x,int y){
    cout<<"Print Non-template"<<endl;
    cout<<"x and y values are \t"<<x<<"\t"<<y<<endl;
}
int main(){
f(3,4);
f('p','q');
f(3,'q');
return 0;
}
