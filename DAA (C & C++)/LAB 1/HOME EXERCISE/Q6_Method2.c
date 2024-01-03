// Write a program to find out the second smallest and second largest element stored in an
// array of n integers. n is the user input. The array takes input through random number
// generation within a given range. How many different ways you can solve this problem.
// Write your approaches & strategy for solving this problem.

//Method 2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    double total_time;
    clock_t start, end;
    int a[50];
    int i,j,b,n;
    // int lower_case, upper_case;
    start = clock();
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    // printf("\nEnter lower case value : ");
    // scanf("%d",&lower_case);
    // printf("\nEnter upper case value : ");
    // scanf("%d",&upper_case);
    printf("\nRandom number generated are : ");
    for(int i=0;i<n;i++)
    {
    // randnumber = rand() % 100 + 1;
    // a[i] = (rand() % (upper_case - lower_case + 1)) + lower_case;   
    a[i] = rand();
    }
    for(i=0; i < n; i++)
    {
    printf("%d ",a[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("\nNumbers are arranged in Descending order are :\n");
    for(i=0;i<n;++i)
    {
        printf("%d\n",a[i]);
    }
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("\nSecond largest no. is :%d\n",a[1]);
    printf("\nSecond smallest no. is :%d\n",a[n-2]);
    printf("\nTime taken : %f sec\n", total_time);
    printf("\nRoll Number : 20051685\n");
    printf("\nBatch - CSE 6\n");
    printf("\nName - Ashish Kumar Mishra\n");
}