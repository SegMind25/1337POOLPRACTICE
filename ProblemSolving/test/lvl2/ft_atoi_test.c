#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
}

void ft_putnbr(int nb)
{
  if(nb < 0)
  {
    ft_putchar('-');
    nb = -nb;
  }

  if(nb >= 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

int ft_atoi(char *str)
{
  int i;
  int sign;
  int result;


  i = 0;
  while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
  {
    i++;
  }

  sign = 1;
  if(str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
    {
      sign = sign - 1;
    }
    i++;
  }

  result = 0;
  while(str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + (str[i] - '0');
    i++;
  }
  return result * sign;
}

int main()
{
  int nb = ft_atoi("42");

  ft_putstr("The Output Of Ft_atoi is : ");
  ft_putnbr(nb);

}
