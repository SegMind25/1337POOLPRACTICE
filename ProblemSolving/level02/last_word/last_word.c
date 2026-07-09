#include <unistd.h>

int main(int ac, char **av)
{

  int i;
  int end;

  if(ac == 2)
  {
    i = 0;
    while(av[1][i])
    {
      i++;
    }
    while(i > 0 && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
    {
      i--;
    }
    end = i;
    while(i > 0 && (av[1][i - 1] != ' ' && av[1][i - 1] != '\t'))
    {
      i--;
    }
    while(i < end)
    {
      write(1, &av[1][i++], 1);
    }
  }
  write(1, "\n", 1);
  return 0;
}
