#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    char emp_name[30];
    int emp_id;
    float salary;
    void getdata(){
        cout<<"Employee's name:";
        cin>>emp_name;
        cout<<"Employee id: ";
        cin>>emp_id;
    }
    void display(){
       cout<<"\nEmployee's name is:"<<emp_name<<endl;
    cout<<"Employee id is: "<<emp_id<<endl;
}
};
class regular:public Employee{
    float bas_salary=100000;
    float da,hra;
    public:
    void cal_sal(){
        da=(0.5*bas_salary);
        hra=(0.2*bas_salary);
        salary=bas_salary+da+hra;
         cout<<"Regular employee's salary is: "<<salary;
    }
};
class partime:public Employee{
    int hrs;
    float pay_per_hr;
    public:
    void get(){
cout<<"The number of hrs:";
cin>>hrs;
cout<<"Pay per hours:";
cin>>pay_per_hr;
}
public:
    void cal(){
        salary=hrs*pay_per_hr;
        cout<<"Part-time employee's salary is: "<<salary;
    }

};
int main(){
    regular b;
    partime c;
    b.getdata();
    b.display();
    b.cal_sal();
    cout<<endl;
    c.getdata();
    c.get();
    c.display();
    c.cal();
return 0;
}
