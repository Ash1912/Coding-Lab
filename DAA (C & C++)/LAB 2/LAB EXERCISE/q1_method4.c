// Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for atleast 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparision of time complexities found for different inputs, plot an
// appropriate graph & decide which algothm is faster.

//Method 2 : Using Recursive Method

#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int is_prime_number(int num, int i)   //Function Definition
{
    if(num < 2)
    {
       printf("\nEnter numbers greater than 1");
       exit(0);
    }
    if (i == 1)
    {
      return 1;
    }
    else
    {
      if (num % i == 0)
      {
         return 0;
      }
      else
      {
         return is_prime_number(num, i-1);
      }
    }
}
int main()
{
   double total_time;
    clock_t start, end;
    int n, flag;
    start = clock();
   printf("Enter a number: ");
   scanf("%d",&n);                      //Initialize the number
   flag = is_prime_number(n, n / 2);   //Function Call

   if (flag == 1)             //Check whether prime or not
   {
      printf("%d is a prime number\n", n);
   }
   else
   {
      printf("%d is not a prime number\n", n);
   }
   end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("\nTime taken : %f seconds\n", total_time);
   return 0;
}

