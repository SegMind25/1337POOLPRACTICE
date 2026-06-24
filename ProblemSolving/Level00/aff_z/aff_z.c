#include <unistd.h>

int main(int ac, char **av)
{

  char c = 'z';

  if(ac == 2)
  {
    int i = 0;
    while(av[1][i] && av[1][i] != 'z')
    {
      i++;
    }
    if(av[1][i] == 'z')
    {
      c = av[1][i];
    }
  }
  write(1, &c, 1);
  write(1, "\n", 1);
  return 0;
}
