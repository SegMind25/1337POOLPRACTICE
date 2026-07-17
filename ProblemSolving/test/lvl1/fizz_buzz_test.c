#include <unistd.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
}

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if(nb >= 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

int main()
{

  int i = 0;
  while(i <= 100)
  {
    if(i % 3 == 0 && i % 5 == 0)
    {
      ft_putstr("fizzbuzz\n");
    }
    else if(i % 3 == 0)
    {
      ft_putstr("Fizz\n");
    }
    else if(i % 5 == 0)
    {
      ft_putstr("Buzz\n");
    }
    else
    {
      ft_putnbr(i);
      ft_putchar('\n');
    }
    i++;
  }

  return 0;
}
