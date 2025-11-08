int ft_str_is_alpha(char *str)
{
  int i = 0;
  while(str[i])
  {
    if((str[i] > 'A' && str[i] < 'Z') || (str[i] > 'a' && str[i] < 'z'))
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
  char str[] = "Bekkali";

  printf("The String is : %d", ft_str_is_alpha(str));
}
