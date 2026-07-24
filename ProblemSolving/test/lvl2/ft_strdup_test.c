#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
}

char *ft_strdup(char *src)
{
  int i;
  int len;
  char *dest;

  len = 0;
  while(src[len])
  {
    len++;
  }

  dest = malloc(sizeof(char) * (len + 1));

  if(!dest)
  {
    write(1, "The Allocation is Failed !!", 27);
    return NULL;
  }

  i = 0;
  while(src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

int main()
{
  char src[] = "Bekkali";
  char *dest;

  dest = ft_strdup(src);

  if(!dest)
  {
    return 1;
  }

  ft_putstr(src);
  ft_putstr("\n");
  ft_putstr(dest);

  free(dest);
  return 0;
}
