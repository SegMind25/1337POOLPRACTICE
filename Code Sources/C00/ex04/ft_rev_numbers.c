#include <unistd.h>

void ft_rev_alpha(void)
{
  char i = 'z';
  while(i <= 'a')
  {
    write(1, &i, 1);
    i--;
  }
  
}
