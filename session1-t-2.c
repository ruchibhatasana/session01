#include <stdio.h>
#include <string.h>

char tasks[5][50];

void markTaskDone(int index)
{
    strcpy(tasks[index], "DONE");
}

int main()
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter Task %d: ", i + 1);
        scanf("%s", tasks[i]);
    }

    markTaskDone(2);

    printf("\nTask List:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

}
