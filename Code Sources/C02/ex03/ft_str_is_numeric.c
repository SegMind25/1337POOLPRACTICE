int ft_str_is_numeric(char *str)
{
  int i = 0;
  while(str[i])
  {
    if(str[i] >= '0' && str[i] <= '9')
    {
      return 0;
    }
    i++;
  }
  return 1;
}

#include <stdio.h>

int main()
{
  char str[] = "10";

  printf("The Number is : %d\n", ft_str_is_numeric(str));
}
