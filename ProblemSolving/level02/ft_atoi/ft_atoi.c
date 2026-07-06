#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{

  int i = 0;
  int sign = 1;
  int result = 0;

  while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
  {
    i++;
  }

  if(str[i] == '+' || str[i] == '-')
  {
    if(str[i] == '-')
    {
      sign = sign - 1;
    }
    i++;
  }

  while(str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + (str[i] - '0');
    i++;
  }
  return result * sign;
}

int main()
{

  printf("\"42\"       -> %d\n", ft_atoi("42"));

  return 0;
}
