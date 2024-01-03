#include <stdio.h>
#include <stdlib.h>

#define MAX_TASKS 100
#define MAX_MACHINES 10

int task_completion_time[MAX_TASKS][MAX_MACHINES];
int task_assignment[MAX_TASKS];
int task_completion[MAX_TASKS];

int main() {
    int num_tasks, num_machines;
    printf("Enter the number of tasks: ");
    scanf("%d", &num_tasks);
    printf("Enter the number of machines: ");
    scanf("%d", &num_machines);

    // Take input for completion time of each task on each machine
    for (int i = 0; i < num_tasks; i++) {
        printf("Enter completion time for task %d on each machine: ", i+1);
        for (int j = 0; j < num_machines; j++) {
            scanf("%d", &task_completion_time[i][j]);
        }
    }

    // Perform sufferage heuristic
    for (int i = 0; i < num_tasks; i++) {
        int min_time = task_completion_time[i][0];
        int min_index = 0;
        for (int j = 1; j < num_machines; j++) {
            if (task_completion_time[i][j] < min_time) {
                min_time = task_completion_time[i][j];
                min_index = j;
            }
        }
        task_assignment[i] = min_index;
        task_completion[i] = min_time;
    }

    // Print the results
    printf("Task assignments: ");
    for (int i = 0; i < num_tasks; i++) {
        printf("%d ", task_assignment[i]);
    }
    printf("\nTask completion times: ");
    for (int i = 0; i < num_tasks; i++) {
        printf("%d ", task_completion[i]);
    }

    return 0;
}
