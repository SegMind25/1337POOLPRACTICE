int ft_str_is_printable(char *str)
{
  int i = 0;
  while(str[i])
  {
    if(str[i] >= 32 && str[i] <= 126)
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
  char *str = "Bekkali";

  printf("%i\n", ft_str_is_printable(str));
}
