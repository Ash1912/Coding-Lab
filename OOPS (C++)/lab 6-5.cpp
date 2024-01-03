#include<iostream>
#include<string.h>
using namespace std;
class demo{
    char *name;
    int length;
    public:
    demo(){
        length=0;
        name=new char[length+1];
    
    }
    demo(char *n){
        length=strlen(n);
        name=new char[length+1];
        if(name==NULL)
            cout<<"Memory not allocated successfully\n";
        strcpy(name,n);
        cout<<"Name is\t"<<name<<endl;
    }
};
int main(){
    char *name="Ashish Mishra.";
    demo d1(name);
}
