// Write a program to store random numbers into an array of n integers, where the array
// must contains some duplicates. Do the following:
// a) Find out the total number of duplicate elements.
// b) Find out the most repeating element in the array.

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <algorithm>


using namespace std;
using namespace std::chrono;
#define SIZE 20

void most_occurred(int nums[]){
    int max_count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<SIZE; i++)
  {
   int count=1;
   for (int j=i+1;j<SIZE;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }
  for (int i=0;i < SIZE;i++)
  {
   int count=1;
   for (int j=i+1; j < SIZE; j++)
       if (nums[i] == nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
}

int main(){
    auto start = high_resolution_clock::now();
    int nums[SIZE];
    for(int i = 0; i < SIZE; i++){
        nums[i] = rand() % ( 63 - 25 + 1 );
    }

    for (int i = 0; i < SIZE; i++){
        // cout << "Random Number generated are :\n";
        cout << nums[i] << " ";
    }

    sort(nums, nums + SIZE);
    int counter = 0;
    for(int i = 0; i < SIZE; i++) {
        if(nums[i] == nums[i+1])
            counter++;
    }
    cout << "\nNo. of Duplicates: " << counter;
    most_occurred(nums);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " microseconds "<< endl;
    cout << "Roll Number : 20051685" << endl; 
    cout << "Batch - CSE6" << endl;
    cout << "Name - Ashish Kumar Mishra" << endl;
    return 0;
}