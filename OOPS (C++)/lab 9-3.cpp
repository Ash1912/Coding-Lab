#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class player{
private:
    int runs;
    int in;
    int no;
    char name[20];
public:
    player(){
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter total runs scored: ";
    cin>>runs;
    cout<<"Enter innings played: ";
    cin>>in;
    cout<<"Enter Not outs: ";
    cin>>no;
    }
    int average(){
    return runs/(in-no);
    }
    void show(){
    cout<<name<<"\t\t"<<runs<<"\t\t"<<in<<"\t\t"<<no<<"\t\t"<<runs/(in-no)<<endl;
    }
};
 
int main(void)
{
    int n;
    cout << "Enter no of players: ";
    cin>>n;
    player p[n];
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=p[i].average();
    }
    sort(a,a+n);
    cout<<"Name\t\tRuns\t\tInnings\t\tnotouts\t\taverage\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[j].average()==a[n-i-1]){
                p[j].show();
            }
        }
    }
}

