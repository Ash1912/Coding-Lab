#include <iostream>
using namespace std;
class employee
{
char id[6];
char name[30];
int age;
int b_sal;
public:
void input()
{
   
cout << "Enter the Employee ID:";
cin >> id;
cout << "Enterthename:";
cin >> name;
cout << "Entertheage:";
cin >> age;
cout << "Enterthesalary:";
cin >> b_sal;
}
float g_sal()
{
return (float)(b_sal+b_sal*0.8+b_sal*0.1);
}
void display()
{
cout<<id<<"\t\t"<<name<<"\t"<<age<<"\t"<<b_sal<<"\t\t"<<g_sal();
}
};
int main()
{
employee e[100];
int n;
cout<<"Enter the number of employees:";
cin >> n;
int employee[n];
for(int i=0;i<n;++i)
{
    cout<<endl;
cout<<"Employee"<<i+1<<":" << endl;
e[i].input();
}
cout<<endl
<<"EmployeeID \tName \tAge \tBasic Salary \tGross Salary "<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
struct employee *pe;
pe=e;
for(int i=0;i<n;++i,++pe)
{
pe->display();
cout<<endl;
}
}
