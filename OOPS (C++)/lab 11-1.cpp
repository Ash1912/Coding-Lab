#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
private:
	int emp_id;
	char emp_name[50];
	float emp_salary;
public:
	Employee()
	{
		emp_id = 0;
		strcpy(emp_name,"NULL");
		emp_salary = 0;
	}
	Employee(int id,char name[],float sal)
	{
         emp_id = id;
         strcpy(emp_name,name);
         emp_salary = sal;
	}
	friend istream& operator>>(istream& input,Employee &e)
	{
     input>>e.emp_id;
     
     input>>e.emp_salary;
     getchar();
     input.getline(e.emp_name,50);
	}
	friend ostream& operator<<(ostream& output,Employee &e)
	{
		output<<e.emp_id<<"\n"<<e.emp_salary<<"\n"<<e.emp_name;
	}
};

int main()
{
	class Employee emp;
	cout<<"Enter the emp_id,emp_salary,emp_name :\n";
	cin>>emp;
	cout<<endl;
	cout<<"Employee id, employee salary and employee name are :\n";
	cout<<emp;
}
