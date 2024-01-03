#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define THREAD_COUNT 4
#define ARRAY_SIZE 400
int arr[ARRAY_SIZE];
struct ThreadParameters
{
    // input
    int* array;
    int start;
    int end;

    // output
    int smallest;
};
void fillArray()
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        arr[i] = rand() % 1000 + 1;
    }
}
void* find_min(void* args)
{
    struct ThreadParameters* params = (struct ThreadParameters*)args;
    int *array = params->array;
    int start = params->start;
    int end = params->end;
    int smallest = array[start];


    for (int i = start; i < end; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    // write the result back to the parameter structure

    params->smallest = smallest;

    return NULL;
}
int main()
{
    int smallest;

    // declare an array of threads and associated parameter instances
    pthread_t threads[THREAD_COUNT] = {0};
    struct ThreadParameters thread_parameters[THREAD_COUNT]  = {0};

    // intialize the array    
    fillArray();

    // smallest and largest needs to be set to something
    smallest = arr[0];

    // start all the threads
    for (int i = 0; i < THREAD_COUNT; i++)
    {
        thread_parameters[i].array = arr;
        thread_parameters[i].start = i * (ARRAY_SIZE / THREAD_COUNT);
        thread_parameters[i].end = (i+1) * (ARRAY_SIZE / THREAD_COUNT);
        pthread_create(&threads[i], NULL, find_min, &thread_parameters[i]);
    }

    // wait for all the threads to complete
    for (int i = 0; i < THREAD_COUNT; i++)
    {
        pthread_join(threads[i], NULL);
    }

    // Now aggregate the "smallest" results from all thread runs    
    for (int i = 0; i < THREAD_COUNT; i++)
    {
        if (thread_parameters[i].smallest < smallest)
        {
            smallest = thread_parameters[i].smallest;
        }
    }

    printf("Smallest is %d\n", smallest);

}