#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_combn_helper(int n, int start, char *combo, int index, int *first)
{
  int i;

  if(index == n)
  {
    if(!*first)
    {
      write(1, ", ", 2);
    }
    else{
      *first = 0;
    }
    i = 0;
    while(i < n)
    {
      ft_putchar(combo[i]);
      i++;
    }
    return ;
  }
  i = start;
  while(i <= 9)
  {
    combo[index] = '0' + i;
    ft_print_combn_helper(n, i + 1, combo, index + 1, first);
    i++;
  }
}

void ft_print_combn(int n)
{
  char combo[10];
  int first;

  first = 1;
  ft_print_combn_helper(n, 0, combo, 0, &first);
}

int main()
{
  ft_print_combn(8);
  write(1, "\n", 1);
  return 0;
}
