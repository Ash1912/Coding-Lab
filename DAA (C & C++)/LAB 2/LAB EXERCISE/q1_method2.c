// Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for atleast 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparision of time complexities found for different inputs, plot an
// appropriate graph & decide which algothm is faster.

//Method 2 : Using Function

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prime(int ar[],int n)
{
    int ar1[1000],ar2[1000];int a=0,b=0;
    for(int j=0;j<n;j++)
    {
  int n, i, c = 0;
  n=ar[j];
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        ar1[a]=n;
        a++;
  }
  else {
         ar2[b]=n;
         b++;
  }
}
printf("\n\nPrime :\n");
for(int k=0;k<a;k++)
{
    printf("%d ",ar1[k]);
}
printf("\n\nNon Prime :\n");
for(int k=0;k<b;k++)
{
    printf("%d ",ar2[k]);
}
}


int main() {
int n;
printf("Enter Array Size=");
scanf("%d",&n);
int ar[n];
for (int i = 0; i < n; ++i) {
   ar[i]=rand()%100;
  }
printf("RANDOM ELEMENTS OF ARRAY=");
for(int i=0;i<n;i++)
{
    printf("%d ",ar[i]);
}

clock_t t;
    t = clock();
  prime(ar, n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf("\nsort() function took %f seconds to execute \n", time_taken);
    printf("\nRoll Number : 20051685\n");
    printf("\nBatch - CSE 6\n");
    printf("\nName - Ashish Kumar Mishra\n");

}
