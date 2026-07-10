#include <unistd.h>

int main(int ac, char **av)
{

  int seen[256];
  int i;
  int s;

  i = 0;
  while(i < 256)
  {
    seen[i++] = 0;
  }

  if(ac == 3)
  {
    i = -1;
    while(av[1][++i])
    {
      if(!seen[s = (unsigned char)av[1][i]]++)
      {
        write(1, &av[1][i], 1);
      }
    }
    i = -1;
    while(av[2][++i])
    {
      if(!seen[s = (unsigned char)av[2][i]]++)
      {
        write(1, &av[2][i], 1);
      }
    }
  }

  write(1, "\n", 1);

  return 0;
}
