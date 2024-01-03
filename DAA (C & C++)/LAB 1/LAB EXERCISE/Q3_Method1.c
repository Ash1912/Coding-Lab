// Write a program to rearrange the elements of an array of n integers such that all even
// numbers are followed by all odd numbers. How many different ways you can solve this
// problem. Write your approaches & strategy for solving this problem.

//Method 1
#include <stdio.h>
#include<time.h>
int main()
{
    double total_time;
    clock_t start, end;
    // method 1
    int arr[10];
    int n;
    int j = 0;
    int s[10];
    start = clock();
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nInput array elements: ");
    for (int i = 0;i < n; i++)
    {
        scanf("%d", &arr[i]);
    } 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            s[j++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            s[j++] = arr[i];
        }
    }
    printf("\nArray after rearranging even followed by odd is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s[i]);
    }
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("\nTime taken : %f sec\n", total_time);
    printf("\nRoll Number : 20051685\n");
    printf("\nBatch - CSE 6\n");
    printf("\nName - Ashish Kumar Mishra\n");

    return 0;
}