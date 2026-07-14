#include <unistd.h>

int main(int ac, char **av)
{

  int i;
  if(ac >= 2)
  {
    while(av[ac - 1][i])
    {
      write(1, av[ac - 1][i++], 1);
    }
    write(1, "\n", 1);
  }

  return 0;
}
