#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  while(nb >= 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

int main()
{

  int i = 9;
  while(i >= 0)
  {
    ft_putnbr(i--);
  }
  write(1, "\n", 1);
  return 0;
}
