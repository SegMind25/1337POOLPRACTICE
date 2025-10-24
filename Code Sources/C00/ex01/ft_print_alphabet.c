#include <unistd.h>

void ft_print_alphabet(void)
{
  char i = 'a';
  while(i <= 'z')
  {
    write(1, &i, 1);
    i++;
  }
}
