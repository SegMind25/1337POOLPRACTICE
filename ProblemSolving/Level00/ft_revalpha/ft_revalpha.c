#include <unistd.h>

int main()
{

  char c = 'z';
  while(c >= 'a')
  {
    if(c % 2 == 0)
    {
      char u = c - 32;
      write(1, &u, 1);
    }
    else
    {
      write(1, &c, 1);
    }
    c--;
  }
  write(1, "\n", 1);
  return 0;
}
