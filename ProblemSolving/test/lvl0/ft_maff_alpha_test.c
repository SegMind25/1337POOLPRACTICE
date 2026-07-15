#include <unistd.h>

void mff_alpha()
{
  char c = 'a';
  int i = 0;

  while(c <= 'z')
  {
    if(c % 2 == 0)
    {
      char upper = c - 32;
      write(1, &upper, 1);
    }
    else
    {
      write(1, &c, 1);
    }
    i++;
    c++;
  }
}

int main()
{

  mff_alpha();

  return 0;
}
