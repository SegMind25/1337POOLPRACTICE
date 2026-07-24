#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c ,1);
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

  if(nb > 10)
  {
    ft_putnbr(nb / 10);
  }
  ft_putchar(nb % 10 + '0');
}

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;
  while(s1[i] && s1[i] == s2[i])
  {
    i++;
  }
  return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main()
{

  char a[] = "Bekkali";
  char b[] = "Bekkale";

  int result = ft_strcmp(b , a);

  ft_putstr("The Diffreces is : ");
  ft_putnbr(result);

  return 0;
}
