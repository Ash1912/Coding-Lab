// 4.7 The quick sort algorithm is an efficient and popular sorting technique that sorts a list of
// keys recursively by choosing a pivot key. A pivot may be chosen as the first or last or
// mean or median or any random element of the list. Write a program to implement this
// sorting algorithm and execute the sorting programs for the following sets of data.
// i. Ordered List
// ii. Reverse order List
// iii. A list containing the same value through out
// iv. Random List
// v. 50% of the List sorted
// Also measure CPU time, number of partitions and number of comparisons for data sizes
// 1K, 50K, 1L, 1.5L, 2L, 2.5L, 3L, 3.5L, 4L, 4.5L and 1M. Present your results using
// tables and graphs and write a 1-page report that summarize the behavior of sorting
// algorithms tested and their suitability in each case as mentioned above.
#include <bits/stdc++.h>
using namespace std;

int pivotcount=0;
int totalcomparisons=0;
int partition(int arr[], int start, int end)
{
    pivotcount++;
	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
  int i = start, j = end;
	while (i < pivotIndex && j > pivotIndex) {
        totalcomparisons++;

		while (arr[i] <= pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;

	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}

int main()
{
    clock_t start=clock();
	int n;
    cout<<"Enter the number of elements = ";
    cin>>n;
	int arr[n];
    cout<<"Enter the value of elements\n";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
    cout<<"\nNumber of Partitions = "<<pivotcount;
    cout<<"\nNumber of Total Comparisons = "<<totalcomparisons;
    cout<<"\nExecution Time = "<<((long double)(clock() - start)/CLOCKS_PER_SEC)<<endl;
	cout<<"\nAshish_20051685\n"<<endl;
	return 0;
}