#include <stdlib.h>

char *ft_strdup(char *src) {
    int i = 0;
    char *dup;

    while (src[i])
        i++;

    dup = (char *)malloc((i + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;

    for (int j = 0; j <= i; j++)
        dup[j] = src[j];

    return dup;
}



