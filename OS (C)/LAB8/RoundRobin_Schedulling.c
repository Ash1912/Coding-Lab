#include<stdio.h>  
void main()  
{  

	int i,sum=0,y=5,count=0,quantum,at[5],bt[5],temp[5];  
	float avg_wt, avg_tat, wt=0,tat=0;  

	FILE *fp;
	FILE *ar;
	fp=fopen("Round Robin Schedulling_burst time.inp","r");
	ar=fopen("Round Robin Schedulling_arrival time.inp","r");
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%d",&bt[i]);
		fscanf(ar,"%d",&at[i]);    
		temp[i] = bt[i];  
	}   
	printf("Enter the Time Quantum for the process:- ");  
	scanf("%d", &quantum);  

	printf("\n Process No\t\tBurst Time\t\tTAT\t\tWaiting Time");  
	for(sum=0, i = 0; y!=0; )  
	{  
		if(temp[i] <= quantum && temp[i] > 0)   
		{  
			sum = sum + temp[i];  
			temp[i] = 0;  
			count=1;  
		}     
		else if(temp[i] > 0)  
		{  
			temp[i] = temp[i] - quantum;  
			sum = sum + quantum;    
		}  
		if(temp[i]==0 && count==1)  
		{  
			y--;  
			printf("\nProcess[%d]\t\t%d\t\t\t%d\t\t%d",i+1,bt[i],sum-at[i],sum-at[i]-bt[i]);  
			wt = wt+sum-at[i]-bt[i];  
			tat = tat+sum-at[i];  
			count =0;     
		}  
		if(i==5-1)  
		{  
			i=0;  
		}  
		else if(at[i+1]<=sum)  
		{  
			i++;  
		}  
		else  
		{  
			i=0;  
		}  
	}  
	avg_wt = wt/5;  
	avg_tat = tat/5;  
	printf("\n Average Turn Around Time: %.2f", avg_wt);  
	printf("\n Average Waiting Time: %.2f", avg_tat);
	printf("\n");  
}