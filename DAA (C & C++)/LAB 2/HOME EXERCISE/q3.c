// Write a menu driven program as given below, to sort an array of n integers in ascending
// order by insertion sort algorithm and determine the time required (in terms of
// step/frequency count) to sort the elements. Repeat the experiment for different values of
// n and different nature of data (i.e.apply insertion sort algorithm on the data of array
// that are already sorted, reversely sorted and random data). Finally plot a graph of the
// time taken versus n for each type of data. The elements can be read from a file or can be
// generated using the random number generator.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int insertsortasc(int *arr,int k)
{
    for(int i=1;i<k;i++){
        int value=arr[i];
        int hole=i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
    /*printf("\n \t\tAfter sorting:\n");
    for(int i=0;i<k;i++){
        printf("%d) %d\n",i,arr[i]);
    }*/
}
int insertsortdesc(int *arr,int k){
        for(int i=1;i<k;i++){
        int value=arr[i];
        int hole=i;
        while(hole>0 && arr[hole-1]<value){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }
    /*printf("\n \t\tAfter sorting:\n");
    for(int i=0;i<k;i++){
        printf("%d) %d\n",i,arr[i]);
    }*/
}
int main(){
    int n=9;
    clock_t start, end;
    double cpu_time_used;
    while(n!=0){
        printf("\nEnter your choice :\n");
        scanf("%d",&n);
        switch(n){ 
            case 1:
            printf("Enter the number of elements you want to enter :\n");
            int k;
            scanf("%d",&k);
            int* arr = (int *)malloc(sizeof(int)*k);
            for(int i=0;i<k;i++)
                arr[i]=rand()%100;
            break;


            case 2:
            printf("The values are :\n");
            for(int i=0;i<k;i++)
                printf("%d\n",arr[i]);
            break;


            case 3:
            printf("\t\tUsing Insertion Sort for ascending");
            insertsortasc(arr,k);
            break;

            case 4:
            printf("\t\tUsing Insertion Sort for descending");
            insertsortdesc(arr,k);
            break;

            case 5:
            printf("Time to sort %d random numbers using insertion sort : ",k);
            start = clock();
            insertsortasc(arr,k);
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printf("%f\n",cpu_time_used);
            break;
            case 6:
                printf("Time complexity of sorting a ascending sorted array\n");
                insertsortasc(arr,k);
                start = clock();
                insertsortasc(arr,k);
                end = clock();
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                printf("%f\n",cpu_time_used);
            break;
            case 7:
                printf("Time complexity of sorting a descending sorted array\n");
                insertsortdesc(arr,k);
                start = clock();
                insertsortasc(arr,k);
                end = clock();
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                printf("%f\n",cpu_time_used);
            break;
            case 8:
            printf("Time to sort %d random numbers using insertion sort : ",k);
            start = clock();
            insertsortasc(arr,k);
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printf("%f\n",cpu_time_used);
            printf("Time complexity of sorting a ascending sorted array\n");
            insertsortasc(arr,k);
            start = clock();
            insertsortasc(arr,k);
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printf("%f\n",cpu_time_used);
            printf("Time complexity of sorting a descending sorted array\n");
            insertsortdesc(arr,k);
            start = clock();
            insertsortasc(arr,k);
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printf("%f\n",cpu_time_used);
            break;
            default:
            printf("\nRoll Number : 20051685\n");
            printf("\nBatch - CSE 6\n");
            printf("\nName - Ashish Kumar Mishra\n");
            printf("QUIT\n");
            break;
        }
    }
    return 0;
}