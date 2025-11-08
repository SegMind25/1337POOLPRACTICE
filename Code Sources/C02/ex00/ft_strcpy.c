char *ft_strcpy(char *dest, char *src)
{
  int i = 0;

  while(src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

#include <stdio.h>

int main()
{
  char dest[5];
  char src[] = "Bekkali";

  printf("Before : %s\n", dest);

  ft_strcpy(dest, src);

  printf("After : %s\n", dest);
}
