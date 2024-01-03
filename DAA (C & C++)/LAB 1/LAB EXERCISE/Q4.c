// Write a program that takes three variable (a, b, c) as separate parameters and rotates the
// values stored so that value a goes to b, b to c and c to a by using SWAP(x,y)
// function that swaps/exchanges the numbers x & y.
//#include <stdio.h>
//#include<time.h>
//void Swap(int *a, int *b, int *c);
//int main() {
//    int a, b, c;
//    double total_time;
//    clock_t start, end;
//    start = clock();
//    printf("Enter a, b and c respectively: ");
//    scanf("%d %d %d", &a, &b, &c);
//
//    printf("Value before swapping:\n");
//    printf("a = %d \nb = %d \nc = %d\n", a, b, c);
//
//    Swap(&a, &b, &c);
//    // Swap(&b, &c);
//    // Swap(&c, &a);
//    end = clock();
//    total_time = ((double) (end - start)) / CLK_TCK;
//
//    printf("Value after swapping:\n");
//    printf("a = %d \nb = %d \nc = %d", a, b, c);
//    printf("\nTime taken : %f sec\n", total_time);
//    printf("\nRoll Number : 20051685\n");
//    printf("\nBatch - CSE 6\n");
//    printf("\nName - Ashish Kumar Mishra\n");
//
//    return 0;
//}
//
//void Swap(int *x, int *y, int *z) {
//    int temp;
//    // swapping in cyclic order
//    temp = *y;
//    *y = *x;
//    *x = *z;
//    *z = temp;
//}
#include <stdio.h>
#include<time.h>

void swap(int *x,int *y){
   int temp1;
   temp1=*x;
   *x=*y;
   *y=temp1;
}
int main(){
   int a,b,c;
   double total_time;
   clock_t start, end;
   start = clock();
   printf("Enter a, b and c respectively: ");
   scanf("%d %d %d",&a,&b,&c);
   printf("Value before swapping:\n");
   printf("a = %d \nb = %d \nc = %d\n", a, b, c);
   swap(&a,&c);
   swap(&b,&c);
   end = clock();
   total_time = ((double) (end - start)) / CLK_TCK;
   printf("Value after swapping:\n");
   printf("a = %d \nb = %d \nc = %d", a, b, c);
   printf("\nTime taken : %f sec\n", total_time);
   printf("\nRoll Number : 20051685\n");
   printf("\nBatch - CSE 6\n");
   printf("\nName - Ashish Kumar Mishra\n");

   return 0;
}
