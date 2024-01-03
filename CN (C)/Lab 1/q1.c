//Write a C program to swap the content of 2 variables using a pointer.
#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
	int a,b;
	printf("Enter value of a : ");
	scanf("%d", &a);
	printf("Enter value of b : ");
	scanf("%d", &b);
	printf("Before Swap : \na is : %d \nb is : %d\n", a,b);
	swap(&a, &b);
	printf("After Swap : \na is : %d \nb is : %d\n", a,b);
	return 0;
}
    
   
