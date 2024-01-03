// Write a C or C++ program to perform sufferage heuristic on virtual machines and tasks by taking the input from the user and also calculate the completion time of each task with explaination.
// 1)For each task find the difference between minimum and second minimum completion time over all the task.
// 2)Find the maximum sufferage/difference over all the task.
// 3)Assign the task to the machine which gives the minimum sufferage completion time.
// 4)Repeat the procedure until all task are scheduled.
#include <iostream>
using namespace std;
//     T1  T2 T3 T4  T5
// VM1|130|40|80|130|90
// VM2|60|150|100|60|110
// VM3|100|70|140|80|170
int main()
{
    int nT, nM;

    cout << "\nEnter the number of machines:" << endl;
    cin >> nM;
    cout << "\nEnter the number of tasks:" << endl;
    cin >> nT;

    int suffHeuristic[nM][nT];
    int tmp[nM][nT];
    int makespan = 0;

    cout << "\nFill Data: \n";

    for (int i = 0; i < nM; i++)
        for (int j = 0; j < nT; j++)
        {
            cin >> suffHeuristic[i][j];
            tmp[i][j] = suffHeuristic[i][j];
        }

    cout << "\nOriginal Data: \n";

    for (int i = 0; i < nM; i++)
    {
        for (int j = 0; j < nT; j++)
            cout << suffHeuristic[i][j] << " ";
        cout << endl;
    }

    int resultTask[nT];
    int resultMachine[nT];
    int resultTime[nT];
    int ptr = -1;

    while (ptr < nT - 1)
    {
        int time[nT], machine[nT];
        for (int j = 0; j < nT; j++)
        {

            int min1 = INT_MAX, min2 = INT_MAX;
            int pos = -1;
            for (int i = 0; i < nM; i++)
            {
                if (suffHeuristic[i][j] < min1)
                {
                    min2 = min1;
                    min1 = suffHeuristic[i][j];
                    pos = i;
                }
                else if (suffHeuristic[i][j] >= min1 && suffHeuristic[i][j] < min2)
                {
                    min2 = suffHeuristic[i][j];
                }
            }
            time[j] = min2 - min1;
            machine[j] = pos;
        }

        int maximum = INT_MIN;
        int pos = -1;

        for (int j = 0; j < nT; j++)
        {
            if (time[j] > maximum)
            {
                maximum = time[j];
                pos = j;
            }
        }

        resultTask[++ptr] = pos;
        resultMachine[ptr] = machine[pos];
        resultTime[ptr] = tmp[machine[pos]][pos];
        int minimum = INT_MAX;
        for (int i = 0; i < nM; i++)
        {
            if (suffHeuristic[i][pos] < minimum)
            {
                minimum = suffHeuristic[i][pos];
            }
        }
        if (minimum > makespan)
        {
            makespan = minimum;
        }

        for (int i = 0; i < nM; i++)
        {
            for (int j = 0; j < nT; j++)
            {
                if (j == resultTask[ptr])
                    suffHeuristic[i][j] = INT_MAX;
                else if (i == resultMachine[ptr] && suffHeuristic[i][j] != INT_MAX)
                    suffHeuristic[i][j] += minimum;
                else
                    continue;
            }
        }
    }

    // printing answer

    cout << "\nAssigned Tasks are: \n";
    for (int i = 0; i < nT; i++)
    {
        cout << resultTask[i] + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < nT; i++)
    {

        printf("\nTask %d runs on Machine %d with time %d units \n ", resultTask[i] + 1, resultMachine[i] + 1, resultTime[i]);
    }
    printf("\nMakespan: %d Units", makespan);
    return 0;
}