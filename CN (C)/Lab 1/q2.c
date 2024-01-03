// Write a C program to assign values to each member of the following structure. Pass the populated structure to a 
// function Using call-by address and print the value of each member of the structure within that function. 
// struct info{ 
// int roll_no; 
// char name[50]; 
// float CGPA; 
// } 

#include <stdio.h>
struct info
{
   char name[50];
   int roll_no;
   float CGPA;
};
void display(struct info *i);

int main() {
   struct info i1;
   printf("Enter name: ");
   scanf("%[^\n]%*c", i1.name);

   printf("Enter roll no: ");
   scanf("%d", &i1.roll_no);
   printf("Enter CGPA: ");
   scanf("%f", &i1.CGPA);
   display(&i1); 

   return 0;
}

void display(struct info *i) {
   printf("\nDisplaying information\n");
   printf("Name: %s", i->name);
   printf("\nRoll No: %d", i->roll_no);
   printf("\nCGPA: %f", i->CGPA);
}
