// Refer the following new sort algorithm for sorting an array A of n numbers. The
// algorithm is described below:
// (i) If there is only one number, return.
// (ii) If there are two numbers, perform a single comparison to determine the order.
// (iii) If there are more than two numbers, then first sort the top two-thirds of the
// elements recursively. Follow this by sorting the bottom two-thirds of the elements
// recursively and then sorting the top two-thirds of the elements again.
// a) Write a program that uses a recursive algorithm to implement the above strategy.
// b) What is the comparison complexity of this new-sort algorithm? Formulate a
// recurrence relation and solve the same to justify your answer.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorttwo(int ar[],int n)
{
   
//    for(int x = 0; x < n - 1; x++){       
//         for(int y = 0; y < n - x - 1; y++){          
//             if(ar[y] > ar[y + 1]){               
//                 int temp = ar[y];
//                 ar[y] = ar[y + 1];
//                 ar[y + 1] = temp;
//             }  } }   

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
  
         
}

int main()
{
    int n;
    clock_t start, end;
     double cpu_time_used;
        start = clock();
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&n);
    printf("\nENTER ELEMENTS : ");
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
      

        if(n==1)
    {
        printf("%d",ar[0]);
        return 0;
    }
    
    else
    
    if(n==2)
    {
        if(ar[0]>ar[1])
        {
            int temp=ar[0];
            ar[0]=ar[1];
            ar[1]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    }

    if(n>2){
         for(int x = 0; x < n - 1; x++){       
        for(int y = 0; y < n - x - 1; y++){          
            if(ar[y] > ar[y + 1]){               
                int temp = ar[y];
                ar[y] = ar[y + 1];
                ar[y + 1] = temp;
            }  } } 
printf("ARRAY AFTER RECURSIVELY SORTING :");
  for(int i=0;i<n;i++)
    {
        printf("%d  ",ar[i]);
    }
         end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
 
    printf("\nProgram took %f seconds to execute \n", cpu_time_used);
    //     printf("\nRoll Number : 20051685\n");
    // printf("\nBatch - CSE 6\n");
    printf("\nAshish_20051685\n");
    }


    return 0;
}