#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10


int main(){
 
    int nums[SIZE];
    for(int i = 0; i < SIZE; i++){
        nums[i] = rand();
    }
    cout << "\nRandom number generated are :\n";
    for (int i = 0; i < SIZE; i++){
        cout << nums[i] << " ";
    }

    int min=nums[0];
    int max=nums[0];

    
    for(int i = 1; i < SIZE; i++){
        // new min
        if(min > nums[i]){
            min = nums[i];
        }
    }

    
    for(int i = 1; i < SIZE; i++){
        // new max
        if(max < nums[i]){
            max = nums[i];
        }
    }

    cout << "\nSmallest :" << min;
    cout << "\nLargest :" << max;
    return 0;
}