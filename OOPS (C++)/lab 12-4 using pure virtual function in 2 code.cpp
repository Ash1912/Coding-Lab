#include <iostream>
#include <cstring>
using namespace std;

class employee
{
    public: 
    string name;
    int id, salary;
    virtual void income()=0;
};

class regular: public employee
{
    public:
    float da, hra, basic_salary;
    void inputregularemployees()
    {
    cout<<"\n----------INPUT THE DETAILS OF THE REGULAR EMPLOYEE----------\n"<<endl;
    cout<<"\nEnter the name of the regular employee: "<<endl;
    cin>>name;
    cout<<"Enter the id of the regular employee: "<<endl;
    cin>>id;
    cout<<"Enter the basic salary of the regular employee: "<<endl;
    cin>>basic_salary;
	}
	void displayregularemployees()
	{
	cout<<"\n----------DISPLAYING THE DETAILS OF THE REGULAR EMPLOYEE----------\n"<<endl;
    cout<<"Name of the regular employee: "<<name<<endl;
    cout<<"ID of the regular employee: "<<id<<endl;
    cout<<"Basic Salary of the regular employee: "<<basic_salary<<endl;
	}
    void income()
    {
        // da=0.25*basic_salary;
        // hra=0.75*basic_salary;  // which is basically 2*basic_salary
        salary=2*basic_salary;
        cout<<"The Salary of the regular employee is: "<<salary<<endl;
    }
};

class part_time: public employee
{
    public: 
    int hour, pph;
    void inputparttimeemployees()
    {
    cout<<"\n-----------INPUT THE DETAILS OF THE PART-TIME EMPLOYEE----------\n"<<endl;
    cout<<"\nEnter the name of the part-time employee: "<<endl;
    cin>>name;
    cout<<"Enter the id of the part-time employee: "<<endl;
    cin>>id;
    cout<<"Enter the total work hours of the part-time employee: "<<endl;
    cin>>hour;
    cout<<"Enter the pay per hour for the part-time employee: "<<endl;
    cin>>pph;
	}
	void displayparttimeemployees()
	{
	cout<<"\n-----------DISPLAYING THE DETAILS OF THE PART-TIME EMPLOYEE----------\n"<<endl;
    cout<<"Name of the part-time employee: "<<name<<endl;
    cout<<"ID of the part-time employee: "<<id<<endl;
    cout<<"Total work hours of the part-time employee: "<<hour<<endl;
    cout<<"Pay per hour of the part-time employee: "<<pph<<endl;
	}
    void income()
    {
        salary = hour * pph;
        cout<<"The Salary of the part-time employee is: "<<salary<<endl;
    }
};

int main()
{
   regular r;
   r.inputregularemployees();
   r.displayregularemployees();
   r.income();
   part_time p;
   p.inputparttimeemployees();
   p.displayparttimeemployees();
   p.income();
    return 0;
}
