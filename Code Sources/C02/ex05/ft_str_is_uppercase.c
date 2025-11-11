int ft_str_is_uppercase(char *str)
{
  int i = 0;
  while(str[i])
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
      return 1;
    }
    else{
      return 0;
    }
    i++;
  }
  return 1;
}

#include <stdio.h>

int main()
{
  char str[] = "";

  printf("%d", ft_str_is_uppercase(str));
}
