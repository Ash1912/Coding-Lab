// Write a program to rearrange the elements of an array of n integers such that all even
// numbers are followed by all odd numbers. How many different ways you can solve this
// problem. Write your approaches & strategy for solving this problem.

//Method 2

#include <stdio.h>
#include<time.h>
int main()
{
     double total_time;
    clock_t start, end;
    // method 1
    int arr[10];
    int n;
    int i = -1, j = 0;
    int t;
    start = clock();
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nInput array elements: ");
    for (int i = 0;i < n; i++)
    {
        scanf("%d", &arr[i]);
    } 
    while (j != n)
    {
        if (arr[j] % 2 == 0)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }

    // Printing segregated array
    printf("\nArray after rearranging even followed by odd is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
        end = clock();
        total_time = ((double) (end - start)) / CLK_TCK;
        printf("\nTime taken : %f sec\n", total_time);
        printf("\nRoll Number : 20051685\n");
        printf("\nBatch - CSE 6\n");
        printf("\nName - Ashish Kumar Mishra\n");



    return 0;
}