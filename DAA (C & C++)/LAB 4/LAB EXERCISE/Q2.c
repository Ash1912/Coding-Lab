// Write a program to sort a list of n elements using the merge sort method and determine
// the time required to sort the elements. Repeat the experiment for different values of n
// and different nature of data (random data, sorted data, reversely sorted data) in the list.
// n is the user input and n integers can be generated randomly. Finally plot a graph of the
// time taken versus n.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randInt()
{
  time_t t;
  srand((unsigned)t * rand());
  return rand() % 5000;
}
void reverseArray(int arr[], int start, int end)
{
   while (start < end)
   {
     int temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     start++;
     end--;
   }
}

void printArray(int A[], int size)
{
   int i;
   for (i = 0; i < size; i++)
     printf("%d ", A[i]);
   printf("\n");
}

void merge(int arr[], int l, int m, int r)
{
   int i, j, k;
   int n1 = m - l + 1;
   int n2 = r - m;
   int L[n1], R[n2];
   for (i = 0; i < n1; i++)
     L[i] = arr[l + i];
   for (j = 0; j < n2; j++)
     R[j] = arr[m + 1 + j];
   i = 0;
   j = 0;
   k = l;
   while (i < n1 && j < n2) {
     if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
     }
     else {
         arr[k] = R[j];
         j++;
     }
     k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r)
{
   if (l < r) {
       int m = l + (r - l) / 2;
       mergeSort(arr, l, m);
       mergeSort(arr, m + 1, r);
       merge(arr, l, m, r);
   }
}
void analyse(int n){
    int *arr1 = malloc(n*sizeof(int));
    for (int i = 0; i < n; ++i)
    {
    arr1[i] = randInt();
    }
    clock_t t;
    double time_taken;
    int x,result;
    t = clock();
    mergeSort(arr1,0,n-1);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    double count1 = time_taken;
    t = clock();
    mergeSort(arr1,0,n-1);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    double count2 = time_taken;
    reverseArray(arr1, 0, n-1);
    t = clock();
    mergeSort(arr1,0,n-1);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    double count3 = time_taken;
    printf("%d\t%f %f %f \n", n,count1, count2, count3);
}
int main(void)
{
  printf("\nAshish_20051685\n");
  printf("\nN\tAvg\t Best\t Worst\n");
  for (int i = 5000; i <= 50000; i += 5000)
  {
    analyse(i);
  }
   return 0;
}
