#include <unistd.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
  write(1, "\n", 1);
}

int main()
{
  
  ft_putstr("Hello");

  return 0;
}
