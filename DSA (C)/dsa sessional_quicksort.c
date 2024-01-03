// Name-Ashish Kumar Mishra  Roll No.-20051685 Branch-CSE(Slot-2) Sub-DSA Sessional


//4.Write a function void quickSort(int *A, int n) to sort an array of numbers.
//The function is supposed to sort randomly generated ‘n’ integer (including negative and positive) numbers and int *A holds the address of dynamic 
//array from the main function. Compute and display the number of comparisons required for sorting ‘n’ numbers. Finally, print both unsorted 
//and sorted data.

#include <stdio.h>
#include <stdlib.h>
  
void quickSort(int n, int* A)
{
    qsrt(A,0,n-1);
}
void qsrt(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    qsrt(array, low, pi - 1);
    qsrt(array, pi + 1, high);
  }
}
//// In partition function 
int partition(int array[], int low, int high) {

  int pivot = array[high];// pivot is the last element
  int i = (low - 1);// index of smaller number
  int j;
  for (j = low; j < high; j++) {
  	//// If current element is smaller than the pivot 
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);// swapping the elements
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
//Function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void quickSort_Comparisom(int n, int* A)
{
    int i, j, t,count=0;
    for (i = 0; i < n; i++) {
  
        for (j = i + 1; j < n; j++) {
  
            if (*(A + j) < *(A + i)) {
  
                t = *(A + i);
                *(A + i) = *(A + j);
                *(A + j) = t;
                count=count+1;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(A + i));
        
    printf("\nWas compared %d times",count);
}
int main()
{   
    int *A;
    int n = 8;
    int randomnumber;
    int i;
    randomnumber = rand() % 10;
    A = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
        A[i] = rand() % 10;
        printf("%d ",A[i]);
    }
    printf("\n");
    quickSort(n, A);
    for (i = 0; i < n; ++i) {
        printf("%d ",A[i]);
    }    
    return 0;
}

//After execution output will be :
// 7  4  0  9  4  8  8  2
 //0  2  4  4  7  8  8  9
