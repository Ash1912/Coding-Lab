#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,total=0,pos,temp;
    float avg_wt,avg_tat;
    FILE *fp;
    fp=fopen("SJF.inp","r");
  
    printf("nEnter Burst Time:n");
    for(i=0;i<5;i++)
    {
        printf("p%d:",i+1);
        fscanf(fp,"%d",&bt[i]);
        p[i]=i+1;         
    }
  

    for(i=0;i<5;i++)
    {
        pos=i;
        for(j=i+1;j<5;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
  
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
  
    avg_wt=(float)total/5;      
    total=0;
  
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<5;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("\np[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
  
    avg_tat=(float)total/5;    
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
}