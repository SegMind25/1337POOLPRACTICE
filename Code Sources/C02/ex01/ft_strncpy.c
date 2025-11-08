char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i = 0;

  while(i < n && src[i])
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
  char dest[6];
  char src[] = "Bekkali";
  int n = 7;

  printf("Before : %s\n", dest);

  ft_strncpy(dest, src, n);

  printf("After : %s\n", dest);
}
