// Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for atleast 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparision of time complexities found for different inputs, plot an
// appropriate graph & decide which algothm is faster.

//Method 1 : Using Loop

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    double total_time;
    clock_t start, end;
    int a[1000];
    int num,c=0,prime[1000],t=0;
    start = clock();
    printf("Enter the number of elements : ");
    scanf("%d",&num);  
    printf("\nRandom number generated are : \n");
    // for(int i=0;i<num;i++)
    // {
    //     a[i] =rand() % 100;
    // }  
    for(int i=0;i<num;i++)
    {
        a[i] =rand()%100;
    }
    for(int i=0;i<num;i++)
    {
        printf("%d ", a[i]);
    }         
    for(int i=0;i<num;i++)  //Check for factors
    {
        c=0;
        for(int j=2;j<a[i];j++)
        {
        if(a[i]%j==0)
        {
            c=1;
            break;
        }
        // count++;
    }
    if(c==0)           //Check whether Prime or not
    {
        prime[t]=a[i];
        t++;
        // printf("It is Not a prime number\n");
    }
 }
    printf("\n\nPrime numbers in above array :\n\n");
    // else
    // {
    //     printf("Prime number\n");
    // }
    for(int i=0;i<t;i++)
    {
        printf(" %d ",prime[i]);
    }
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
     printf("\nTime taken : %f seconds\n", total_time);
     printf("\nRoll Number : 20051685\n");
     printf("\nBatch - CSE 6\n");
     printf("\nName - Ashish Kumar Mishra\n");

    return 0;
}
