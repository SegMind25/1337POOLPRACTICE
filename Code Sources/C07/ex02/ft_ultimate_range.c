#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *arr;
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    size = max - min;
    arr = (int *)malloc(size * sizeof(int));
    if (!arr)
        return (-1);
    
    i = 0;
    while (min < max)
    {
        arr[i] = min;
        min++;
        i++;
    }

    *range = arr;
    return (size);
}
