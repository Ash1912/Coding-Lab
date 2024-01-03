// C program for Highest Response Ratio Next (HRRN) Scheduling
#include <stdio.h>
struct process {
    char process;
    int at, bt, ct, wt, tt;
    int completed;
    float ntt;
} p[10];    
int n ;
void sortByArrival()
{
    struct process temp;
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (p[i].at > p[j].at) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}
void main()
{
    int i, j, t, sum_bt = 0;
    int P;
    float avgwt = 0, avgtt = 0;
    n = 5;
    int arriv[5], burst[5];
    FILE *fp, *fp1;
    fp=fopen("HRRN_ARRIVALtime.inp","r");
    fp1=fopen("HRRN_BURSTTIME.inp","r");

     for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&arriv[i]);
        fscanf(fp1,"%d",&burst[i]);          
    }
    for (i = 0, P = '1'; i < n; i++, P++) {
        p[i].process = P;
        p[i].at = arriv[i];
        p[i].bt = burst[i];
        p[i].completed = 0;
        sum_bt += p[i].bt;
    }
    sortByArrival();
    printf("\nProcess\t Arrival Time\t  Burst Time\t  Waiting Time");
    printf("\t TurnAround Time\t");
    for (t = p[0].at; t < sum_bt;) {
        float hrr = -9999;
        float temp;
        int loc;
        for (i = 0; i < n; i++) {
            if (p[i].at <= t && p[i].completed != 1) {
                temp = (p[i].bt + (t - p[i].at)) / p[i].bt;
                if (hrr < temp) {
                    hrr = temp;
                    loc = i;
                }
            }
        }
        t += p[loc].bt;
        p[loc].wt = t - p[loc].at - p[loc].bt;
        p[loc].tt = t - p[loc].at;
        avgtt += p[loc].tt;
        p[loc].completed = 1;
        avgwt += p[loc].wt;
        printf("\nP[%c]\t\t%d\t\t", p[loc].process, p[loc].at);
        printf("%d\t\t%d\t\t", p[loc].bt, p[loc].wt);
        printf("%d\t\t", p[loc].tt);
    }
    printf("\nAverage waiting time:%f\n", avgwt / n);
    printf("Average Turn Around time:%f\n", avgtt / n);
}