#include <unistd.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
  write(1, "\n", 1);
}

char *ft_strcpy(char *s1, char *s2)
{
  int i = 0;
  while(s2[i])
  {
    s1[i++] = s2[i++];
  }
  s1[i] == '\0';
  return s1;
}

int main()
{
  char src[] = "Hello";
  char dest[20];

  ft_strcpy(dest, src);

  ft_putstr(dest);
  ft_putstr(src);
}
