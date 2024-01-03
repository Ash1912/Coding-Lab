// C program to find minimum space and units
// of two sofas to fill a room.
#include <stdio.h>

void minSpacePreferLarge(int w, int m, int n)
{
	// for simplicity, Assuming m is always smaller than n
	// initializing output variables
	int num_m = 0, num_n = 0, min_empty = w;
    int step = 0;
	// p and q are no of sofas of length m and n
	// rem is the empty space
	int p = w / m; 
    int q = 0;
    int rem = w % m;
	num_m = p;
	num_n = q;
	min_empty = rem;
	while (w >= n) {
		// place one more sofa of length n
		q += 1;
		w = w - n;
		// place as many sofa of length m
		// in the remaining part
		p = w / m;
		rem = w % m;

		// update output variable if curr
		// min_empty <= overall empty
		if (rem <= min_empty) {
			num_m = p;
			num_n = q;
			min_empty = rem;
		}
        printf("No. of sofa of length 3 :%d \nNo. of sofa of length 5 :%d \nEmpty Space :%d \nStep :%d\n", num_m, num_n, min_empty, step++);
         //step = step + 1;
	}

	printf("%d %d %d\n", num_m, num_n, min_empty);
}
int main()
{
	int w = 24, m = 3, n = 5;
	minSpacePreferLarge(w, m, n);
	return 0;
}
