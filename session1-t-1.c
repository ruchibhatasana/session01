#include <stdio.h>
#include <string.h>

char tasks[5][50];

int main()
{
    int i;

    printf("Enter 5 tasks:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Task %d: ", i + 1);
        scanf("\n %s", tasks[i]);
    }

    printf("\nTask List:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

}