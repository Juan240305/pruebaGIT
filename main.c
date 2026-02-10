#include<stdio.h>
#include<string.h>

typedef char Command[20];

typedef char TaskName[30];
typedef char TaskDescription[300];

typedef struct {
    TaskName name;
    TaskDescription description;
    int stauts;
} Task;


int main() {
    Task newTask;
    strcpy(newTask.name, "Tender");
    strcpy(newTask.description, "Tengo que tender la ropa antes de que llueva");
    newTask.stauts = -1;

    printf("TASK: %s\n", newTask.name);
    printf("DESCRIPCION: %s\n", newTask.description);
    return 0;
}