// 4.4 Write a program that uses a divide-and-conquer algorithm/user defined function for the
// exponentiation problem of computing an where a > 0 and n is a positive integer. How
// does this algorithm compare with the brute-force algorithm in terms of number of
// multiplications made by both algorithms.
#include<stdio.h>
#include<time.h>
int count_divide_and_conquer = 0;
int count_naive = 0;
unsigned long long int divide_and_conquer_Power(int a,int n){
    ++count_divide_and_conquer;
     if(n == 1) 
     return a;
     if(n == 0) 
     return 1;
     int number = divide_and_conquer_Power(a,n/2);
     if(n&1)
     return number * a * number;
     else
     return number * number;
}
unsigned long long int naive_Power(int a,int n){
     if (n==0) 
     return 1;
     if (n==1) 
     return a;
     int num = a;
     ++count_naive;
     for(int i=1;i<n;i++){
     ++count_naive;
     num*=a;
    }
   return num;
}
int main(){
    double total_time;
    clock_t start, end;
    int a = 4;
    int b = 12;
    start = clock();
    unsigned long long int pow1 = divide_and_conquer_Power(a,b);
    unsigned long long int pow2 = naive_Power(a,b);
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("Soln by Divide and conquer :\n");
    printf("Ans: %lli\nNo. of Multiplications: %d\n",pow1,count_divide_and_conquer);
    printf("Soln by Brute Force :\n");
    printf("Ans: %lli\nNo. of Multiplications: %d\n",pow2,count_naive);
    printf("\nTime taken : %f seconds\n", total_time);
    printf("\nAshish_20051685\n");
}

// The divide and conquer algorithm takes lesser number of multiplication compared to brute force
// method hence is more efficient.