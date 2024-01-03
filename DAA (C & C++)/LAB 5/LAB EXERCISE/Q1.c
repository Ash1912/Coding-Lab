// 5.1 Write a menu (given as follows) driven program to sort an array of n integers in
// ascending order by heap sort algorithm and perform the operations on max heap.
// Determine the time required to sort the elements. Repeat the experiment for different
// values of n, the number of elements in the array to be sorted and plot a graph of the time
// taken versus n. The elements can be read from a file or can be generated using the
// random number generator.
// MAX-HEAP & PRIORITY QUEUE MENU
// 0. Quit
// 1. n Random numbers=>Array
// 2. Display the Array
// 3. Sort the Array in Ascending Order by using Max-Heap Sort
// technique
// 4. Sort the Array in Descending Order by using any algorithm
// 5. Time Complexity to sort ascending of random data
// 6. Time Complexity to sort ascending of data already sorted in
// ascending order
// 7. Time Complexity to sort ascending of data already sorted in
// descending order
// 8. Time Complexity to sort ascending all Cases (Data Ascending,
// Data in Descending & Random Data) in Tabular form for
// values n=5000 to 50000, step=5000
// 9. Extract largest element
// 10. Replace value at a node with new value
// 11. Insert a new element
// 12. Delete an element
// Enter your choice:
// If the choice is option 8, the it will display the tabular form as follows:
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j<=high - 1; j++) {
        if(arr[j] > pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i + 1);
}
