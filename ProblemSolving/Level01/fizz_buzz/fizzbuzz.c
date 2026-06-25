#include <unistd.h>

void ft_putnbr(int nb)
{
  if(nb > 10)
  {
    ft_putnbr(nb / 10);
  }
  nb = (nb % 10 + '0');
  write(1, &nb, 1);
}

int main()
{

  int i = 0;
  while(i <= 100)
  {
    if(i % 3 == 0 && i % 5 == 0)
    {
      write(1, "fizzbuzz", 8);
    }
    else if(i % 3 == 0)
    {
      write(1, "fizz", 4);
    }
    else if(i % 5 == 0)
    {
      write(1, "buzz", 4);
    }
    else
    {
      ft_putnbr(i);
    }
    i++;
    write(1, "\n", 1);
  }

  return 0;
}
