#include <unistd.h>

int main(int ac, char **av)
{

  int i;

  if(ac == 2)
  {
    while(av[1][i])
    {
      if(av[1][i] != 'a')
      {
        i++;
      }
      else
      {
        write(1, "a\n", 2);
        i++;
      }
    }
  }
  else
  {
    write(1, "a\n", 1);
  }

  return 0;
}
