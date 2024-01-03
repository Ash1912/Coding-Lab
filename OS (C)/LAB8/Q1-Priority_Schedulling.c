#include<stdio.h>
 
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,total=0,pos,temp,avg_wt,avg_tat;
    FILE *fp, *fp1;
    fp=fopen("Priority Schedulling_bursttime.inp","r");
    fp1=fopen("Priority Schedulling_priority.inp","r");
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<5;i++)
    {
        fscanf(fp,"%d",&bt[i]);
        fscanf(fp1,"%d",&pr[i]);
        p[i]=i+1;           
    }
 
    for(i=0;i<5;i++)
    {
        pos=i;
        for(j=i+1;j<5;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;    
    for(i=1;i<5;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
    avg_wt=total/5;      
    total=0;
    printf("\nProcess\t    Burst Time    \tPriority    \tWaiting Time\tTurnaround Time");
    for(i=0;i<5;i++)
    {
        tat[i]=bt[i]+wt[i];     
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t    %d\t\t\t%d",p[i],bt[i],pr[i],wt[i],tat[i]);
    }
    avg_tat=total/5;     
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
return 0;
}