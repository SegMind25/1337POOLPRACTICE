#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_strcmp(char *src)
{
  int i;
  int len;
  char *dup;

  len = 0;
  while(src[len])
  {
    i++;
  }

  dup = (char *)malloc(sizeof(char) * (len + 1));
  if(!dup)
  {
    return (NULL);
  }

  i = 0;
  while(src[i])
  {
    dup[i++] = dup[i++];
  }

  dup = '\0';
  return dup;
}
