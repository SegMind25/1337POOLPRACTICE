#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;

    if (min >= max)
        return (NULL);
    
    range = (int *)malloc((max - min) * sizeof(int));
    if (!range)
        return (NULL);
    
    i = 0;
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return (range);
}
