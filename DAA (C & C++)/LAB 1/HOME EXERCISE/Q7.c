 // Write a program to swap pair of elements of an array of n integers from starting. If n is
// odd, then last number will be remain unchanged.
 
#include <stdio.h>
#include<time.h>

int main()
{
    double total_time;
    clock_t start, end;
    int n;
    int i;
    int temp;
    start = clock();
    printf("Enter numbers you want to enter : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element for position %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Array entered is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i += 2)
    {
        if (i + 1 == n)
        {
            break;
        }
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    printf("\nArray after swapping is done : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("\nTime taken : %f sec\n", total_time);
    printf("\nRoll Number : 20051685\n");
    printf("\nBatch - CSE 6\n");
    printf("\nName - Ashish Kumar Mishra\n");
}