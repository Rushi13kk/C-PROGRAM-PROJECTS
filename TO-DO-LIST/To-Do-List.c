#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10
#define MAX_LENGTH 50

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;

void addTask() {
    if (taskCount < MAX_TASKS) {
        printf("Enter task: ");
        scanf(" %[^\n]", tasks[taskCount]);
        taskCount++;
        printf("Task added successfully!\n");
    } else {
        printf("Task list is full!\n");
    }
}

void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks available.\n");
        return;
    }
    printf("\nYour Tasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

void deleteTask() {
    int taskNumber;
    printf("Enter task number to delete: ");
    scanf("%d", &taskNumber);

    if (taskNumber >= 1 && taskNumber <= taskCount) {
        for (int i = taskNumber - 1; i < taskCount - 1; i++) {
            strcpy(tasks[i], tasks[i + 1]);
        }
        taskCount--;
        printf("Task deleted successfully!\n");
    } else {
        printf("Invalid task number!\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nTo-Do List Menu:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Delete Task\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}