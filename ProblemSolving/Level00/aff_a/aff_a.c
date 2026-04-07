#include <unistd.h>

int main(int ac, char **av)
{

  if(ac > 1)
  {
    int i = 0;
    if(av[1][i] == 'a' || av[1][i])
    {
      write(1, "a", 1);
    }
    write(1, "\n", 1);
  }

  return 0;
}
