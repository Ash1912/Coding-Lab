#include<stdio.h>
 
int main()
{
    int bt[5],tat[5],wt[5],i,j;
    float avg_wt,avg_tat,total_wt=0,total_tat=0;
    wt[0]=0;
    FILE *fp;
    fp=fopen("FCFS.inp","r");
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<5;i++)
    {
        fscanf(fp,"%d",&bt[i]);
    }    
    for(i=1;i<5;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    //TAT=Waiting time+burst time
    for(i=0;i<5;i++)
    {
        tat[i]=bt[i]+wt[i];
        total_wt+=wt[i];
        total_tat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avg_wt=total_wt/i;
    avg_tat=total_tat/i;
    printf("\n\nAverage Waiting Time:%.2f",avg_wt);
    printf("\nAverage Turnaround Time:%.2f \n",avg_tat);
 
    return 0;
}