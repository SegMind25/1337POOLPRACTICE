#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
  while(str[i])
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
