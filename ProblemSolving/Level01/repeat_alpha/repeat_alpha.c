#include <unistd.h>

int main(int ac, char **av)
{

  int i;
  int j;
  int index;

  if(ac == 2)
  {
    i = 0;
    while(av[1][i])
    {
      if((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
      {
        index = (av[1][i] | 32) - 'a' + 1;
        j = 0;
        while(j++ < index)
        {
          write(1, &av[1][i], 1);
        }
      }
      i++;
    }
  }
  write(1, "\n", 1);
  return 0;
}
