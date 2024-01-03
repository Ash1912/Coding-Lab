//WAP TO PERFORM MAX-MAX ALGORITHM.
#include <stdio.h>
#include <limits.h>
int main()
{

    int nT, nM; // number of tasks , number of machines
    printf("\nEnter number of machines and tasks:\n");
    scanf("%d%d", &nM, &nT);
    /*
    Declare a 2d-array of size nM x nT
    Data should be in the following format :

         T1     T2  T3
    VM1 | 140 | 20  | 60 |
    VM2 | 100 | 100 | 70 |

    */

    int maxMax[nM][nT];
    int tmp[nM][nT];
    int makespan = 0;
    printf("\nFill Data\n");
    for (int i = 0; i < nM; i++)
        for (int j = 0; j < nT; j++)
        {
            scanf("%d", &maxMax[i][j]);
            tmp[i][j] = maxMax[i][j];
        }

    // visualise data
    printf("\nOriginal Data\n");

    for (int i = 0; i < nM; i++)
    {
        for (int j = 0; j < nT; j++)
            printf("%d ", maxMax[i][j]);
        printf("\n");
    }

    // This array will hold the answer

    int resultTask[nT];
    int resultMachine[nT];
    int resultTime[nT];
    int ptr = -1; // Indicates if result set is full or not

    while (ptr < nT - 1)
    {
        int time[nT], machine[nT]; // stores minimum time w.r.t machine of each task
        for (int j = 0; j < nT; j++)
        {
            int maximum = INT_MIN;
            int pos = -1;
            for (int i = 0; i < nM; i++)
            {
                if (maxMax[i][j] > maximum)
                {
                    maximum = maxMax[i][j];
                    pos = i;
                }
            }
            time[j] = maximum;
            machine[j] = pos;
        }

        // Now we find task with minimum time

        int maximum = INT_MIN;
        int pos = -1;

        for (int j = 0; j < nT; j++)
        {
            if (time[j] > maximum && time[j] != INT_MIN)
            {
                maximum = time[j];
                pos = j;
            }
        }

        resultTask[++ptr] = pos;
        resultMachine[ptr] = machine[pos];
        resultTime[ptr] = tmp[machine[pos]][pos];
        if (maximum > makespan)
            makespan = maximum;
        // resetting states

        for (int i = 0; i < nM; i++)
        {
            for (int j = 0; j < nT; j++)
            {
                if (j == resultTask[ptr])
                    maxMax[i][j] = INT_MIN;
                else if (i == resultMachine[ptr] && maxMax[i][j] != INT_MAX)
                    maxMax[i][j] += maximum;
                else
                    continue;
            }
        }
    }

    // printing answer
    printf("\nScheduled Task are :\n");
    for (int i = 0; i < nT; i++)
    {
        printf("\nTask %d Runs on Machine %d with Time %d units\n", resultTask[i] + 1, resultMachine[i] + 1, resultTime[i]);
    }

    printf("\nCompletion Time : %d units\n", makespan);
    return 0;
}