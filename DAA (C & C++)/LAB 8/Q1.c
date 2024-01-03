// Dedicate Length
// Nikhil wants to bring sofa(s) to his room. But he wants to dedicate the entire length
// of the room to the sofa(s). Now Nikhil's room length is W meters, and when he went to 
// the shop he found out sofas of two types, one of length N and other of length M.
// Now, let Nikhil know how many sofas of the first and second type he should buy to 
// reduce wastage of space. First minimize the space wastage then, if similar result 
// arises always prefer the sofa with a larger length. In case N==M give preference to second sofa.
// Input format
// The first line contains an integer T, denoting the number of test cases.
// Each test case contains three integers W,N and M.
// Output format
// For every testcase print two integers a and b, number of sofa of type 1 and 2 respectively.
// Constraints
// 1<=T<=10
// 1<=N,M,W<=10000
// Time Limit
// 1 second
// Example Input
// 1
// 24 3 5
// Output
// 3 3

#include <stdio.h>
#include <time.h>
void minSpacePreferLarge(int w, int m, int n)
{
	int num_m = 0, num_n = 0, min_empty = w;
	int p = w / m; // 24/3 =8
    int q = 0; 
    int rem = w % m; //24%3 =0
	num_m = p; //8
	num_n = q; //0
	min_empty = rem; //0
	while (w >= n) { //24>=5 True

		q += 1; //1
		w = w - n; //24-5= 19
		p = w / m; //24/3= 8
		rem = w % m; //24%3=0

		if (rem <= min_empty) { //0<=0 True
			num_m = p; //8
			num_n = q; //0
			min_empty = rem; //0
		}
	}
	printf("%d %d \n", num_m, num_n, min_empty);
}
int main()
{
    double total_time;
    clock_t start, end;
    int t;
	int w, m, n;
    printf("Input :\n");
	for(int t=1; t<2; t++)
	{
    printf("Test Case : %d\n",t);
	}
    printf("Enter three integers :");
	scanf(" %d %d %d",&w,&m,&n);
    printf("Output :\n");
	minSpacePreferLarge(w, m, n);
    end = clock();
    total_time = ((double) (end - start)) / CLK_TCK;
    printf("\nTime taken : %f seconds\n", total_time);
    printf("\nAshish_20051685\n");
	return 0;
}

