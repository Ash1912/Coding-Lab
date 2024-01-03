//Create nested structure & store employee details
//struct Employee {
//     char name[20];
//     int salary;
// }
// struct organization {
//     char organization_name[30];
// }

#include <stdio.h>
struct organization
{
    char organization_name[30];  
};
struct Employee {
    char name[20];
    int salary;
    struct organization o; 
};
void main ()
{
    struct Employee emp;
    printf("\nEnter Employee information :\n");
    scanf("%s %s %d", emp.name, emp.o.organization_name, &emp.salary);
    printf("\nPrinting Employee Details :\n");
    printf("\nEmployee Name = %s \nOrganization Name = %s \nEmployee Salary = %d \n", emp.name, emp.o.organization_name, emp.salary);
}
