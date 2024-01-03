//Write a program to find out GCD (greatest common divisor) using the following three
//algorithms.
// c) Middle school procedure which makes use of common prime factors. For finding
// list of primes implement sieve of Eratosthenes algorithm.
#include<stdio.h>
#include<math.h>
#include<time.h>
#define MAX 100000
int main(){
	int a,b;
    clock_t t1=clock();
	printf("\nENTER THE TWO VALUES :\n");
	scanf("%d %d",&a,&b);
	int arr[b-1],i=0,j=0;
	for(i=0;i<b-1;i++){
		arr[i]=2+i;
	}
	for(i=0;i<b-1;i++){
		if(arr[i]!=0){
		for(j=i+1;j<b-1;j++){
			if(arr[j]%arr[i]==0&&arr[j]>=arr[i]*arr[i]){
				arr[j]=0;
				}
			}
		
		}
	}
	int gc[MAX],k=0;
	for(i=0;i<b-1;i++){
		if(arr[i]!=0){
			gc[k]=arr[i];
			k++;
		}
	}
	j=0;
	int gcd1[MAX],gcd2[MAX],c=0;
	for(i=0;i<k&&a!=0;){
		if(a%gc[i]==0&&a!=0){
			a=a/gc[i];
			gcd1[j]=gc[i];
			j++;
		}
		else{
			i++;
		}
		
	}
	for(i=0;i<k&&b!=0;){
		if(b%gc[i]==0){
			b=b/gc[i];
			gcd2[c]=gc[i];
			c++;
		}
		else{
			i++;
		}
		
	}
	int gcd3[MAX],h=0;
	for(i=0;i<k;i++){
		if(gcd1[i]==gcd2[i]&&gcd1[i]!=0&&gcd2[i]!=0){
			gcd3[h]=gcd1[i];
			h++;
		}
		
	}
	int mul=1;
	for(i=0;i<h;i++){
		mul=mul*gcd3[i];
	}
	printf("GCD is %d",mul);


        t1=clock()-t1;
	double time_taken=((double)t1)/CLOCKS_PER_SEC;
	printf("\nTime taken is %f",time_taken);

    printf("\nRoll Number : 20051685\n");
    printf("\nBatch - CSE 6\n");
    printf("\nName - Ashish Kumar Mishra\n");
}