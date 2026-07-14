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

void ft_print_numbers()
{
  int i = 0;
  while(i <= 9)
  {
    ft_putnbr(i++);
  }
  write(1, "\n", 1);
}

int main()
{
  ft_print_numbers();
}
