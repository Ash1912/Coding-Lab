#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    public: 
    string name;
    int id, salary;
    virtual int income()
    {

    }
};

class regular: public employee
{
    public:
    float da, hra, basic_salary;
    int income()
    {
        // da=0.25*basic_salary;
        // hra=0.75*basic_salary;  // which is basically 2*basic_salary
        salary=2*basic_salary;
        return salary;
    }
};

class part_time: public employee
{
    public: 
    int hour, pph;
    int income()
    {
        salary = hour * pph;
        return salary;
    }
};

int main()
{
    employee *ptr;

    regular r;
    cout<<"Enter the name of the regular employee: "<<endl;
    cin>>r.name;
    cout<<"Enter the id of the regular employee: "<<endl;
    cin>>r.id;
    cout<<"Enter the basic salary of the regular employee: "<<endl;
    cin>>r.basic_salary;

    cout<<"\n";

    part_time p;
    cout<<"Enter the name of the part-time employee: "<<endl;
    cin>>p.name;
    cout<<"Enter the id of the part-time employee: "<<endl;
    cin>>p.id;
    cout<<"Enter the total work hours of the part-time employee: "<<endl;
    cin>>p.hour;
    cout<<"Enter the pay per hour for the part-time employee: "<<endl;
    cin>>p.pph;

    cout<<"\n";

    cout<<"DISPLAYING THE DETAILS OF THE REGULAR EMPLOYEE"<<endl;
    cout<<"Name of the regular employee: "<<r.name<<endl;
    cout<<"ID of the regular employee: "<<r.id<<endl;
    cout<<"Basic Salary of the regular employee: "<<r.basic_salary<<endl;
    ptr=&r;
    cout<<"The Salary of the regular employee is: "<<ptr->income()<<endl;

    cout<<"\n";

    cout<<"DISPLAYING THE DETAILS OF THE PART-TIME EMPLOYEE"<<endl;
    cout<<"Name of the part-time employee: "<<p.name<<endl;
    cout<<"ID of the part-time employee: "<<p.id<<endl;
    cout<<"Total work hours of the part-time employee: "<<p.hour<<endl;
    cout<<"Pay per hour of the part-time employee: "<<p.pph<<endl;
    ptr=&p;
    cout<<"The Salary of the part-time employee is: "<<ptr->income()<<endl;

    return 0;
}
