#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int newSize = 5;

    void *ptr;

    ptr = malloc(2 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    numbers = (int *)ptr;

    numbers[0] = 10;
    numbers[1] = 20;

    printf("Before realloc:\n");
    printf("%d %d\n", numbers[0], numbers[1]);

    ptr = realloc(numbers, newSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = (int *)ptr;

    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    printf("After realloc:\n");

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    free(numbers);

    return 0;
}
