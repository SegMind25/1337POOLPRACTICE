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
  if(nb >= 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{

  int a = 15;
  int b = 16;

  ft_putstr("Before The First Swap : ");
  ft_putnbr(a);
  ft_putchar('\n');
  ft_putstr("Before The Second Swap : ");
  ft_putnbr(b);

  ft_putchar('\n');

  ft_swap(&a, &b);

  ft_putstr("The First Swap : ");
  ft_putnbr(a);
  ft_putchar('\n');
  ft_putstr("The Second Swap : ");
  ft_putnbr(b);

  return 0;
}
