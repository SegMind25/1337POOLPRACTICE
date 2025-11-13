char *ft_strlowcase(char *str)
{
  while(*str)
  {
    if(*str >= 'A' && *str <= 'Z')
    {
      *str += 32;
    }
    str++;
  }
  return str;
}

#include <stdio.h>

int main()
{
  char str[] = "Bekkali";

  ft_strlowcase(str);

  printf("%s", str);
}
