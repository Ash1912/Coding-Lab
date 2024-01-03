#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		char name[100];
		int employee_id;
		long salary;
		Employee()
		{
			strcpy(name,"Ashish");
			employee_id = 1912;
			salary = 10000;
		}
		Employee(char nam[],int emp_id, long sal)
		{
			strcpy(name,nam);
			employee_id = emp_id;
			salary = sal;
		}
		Employee(Employee &e)
		{
			strcpy(name,e.name);
			employee_id=e.employee_id;
			salary=e.salary;
		}
		void show()
		{
			cout<<"Employee name is :\t"<<name<<endl;
			cout<<"Employee id is :\t"<<employee_id<<endl;
			cout<<"Employee salary is :\t"<<salary<<endl;
			cout<<endl;
		}
};
int main()
{
	Employee e1;
	e1.show();
	Employee e2("Ash",191200,1000);
	e2.show();
	Employee e3(e2);
	e3.show();
	return 0;
}
