#include <stdlib.h>

char *ft_strdup(char *src) {
    size_t i = 0;
    char *dup;

    while (src[i])
        i++;

    if (i == (size_t)-1)
        return NULL;
    dup = (char *)malloc(i + 1);
    if (dup == NULL)
        return NULL;

    for (size_t j = 0; j <= i; j++)
        dup[j] = src[j];

    return dup;
}



