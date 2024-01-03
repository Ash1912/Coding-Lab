// Write a program to use divide and conquer method to determine the time required to find
// the maximum and minimum element in a list of n elements. The data for the list can be
// generated randomly. Compare this time with the time taken by straight forward
// algorithm or brute force algorithm for finding the maximum and minimum element for
// the same list of n elements. Show the comparison by plotting a required graph for this
// problem.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randInt() {
    time_t t;
    srand((unsigned)t * rand());
    return rand() % 1000;
}
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++){
    if (arr[j] < pivot){
    i++;
    swap(&arr[i], &arr[j]);
  }
 }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}
void quickSort(int arr[], int low, int high){
    if (low < high){
    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}
}
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}
void analyse(int n){
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
    int num = randInt();
    arr[i] = num;
    }
    int max, min, i;
    clock_t t;
    double rt, bt;
    t = clock();
    max = arr[0];
    min = arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    t = clock() - t;
    bt = ((double)t)/CLOCKS_PER_SEC;
    t = clock();
    quickSort(arr, 0, n - 1);
    t = clock() - t;
    rt = ((double)t)/CLOCKS_PER_SEC;
    printf("%d\t%5d\t\t%10f\t\t%10f", n / 5000, n,rt,bt);
}
int main(){
    printf("\nAshish_20051685\n");
    printf("S.No\tVal N\t Using Divide & Conquer\t \tUsing Brute Force\n");
    for (int i = 5000; i <= 50000; i += 5000){
    analyse(i);
    printf("\n");
   }
}