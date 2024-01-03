// Write a program to store random numbers into an array of n integers and then find out
// the smallest and largest number stored in it. n is the user input.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// #include<unistd.h>

int main()
{
double total_time;
clock_t start, end;
int a[50],i,n,large,small;
start = clock();
// int randnumber;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nRandom number generated are : ");
// srand((unsigned int)time);
for(int i=0;i<n;i++)
{
    // randnumber = rand() % 100 + 1;
    a[i] = rand();   
}
for(i=0; i < n; i++)
{
    printf("%d ",a[i]);
}

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}
end = clock();
total_time = ((double) (end - start)) / CLK_TCK;

printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);
printf("\nTime taken : %f sec\n", total_time);
printf("\nRoll Number : 20051685\n");
printf("\nBatch - CSE 6\n");
printf("\nName - Ashish Kumar Mishra\n");

return 0;
}