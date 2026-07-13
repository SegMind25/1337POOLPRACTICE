#include <unistd.h>

int main(int ac, char **av)
{

  int i;
  if(ac == 2)
  {
    i = 0;
      if(av[1][i] == 'z')
      {
        write(1, "z\n", 2);
      }
      i++;
  }
  else
  {
    write(1, "z\n", 2);
  }

  return 0;
}
