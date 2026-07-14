#include <unistd.h>

void revy_alphy()
{
  char c = 'z';
  int i = 0;

  while(c >= 'a')
  {
    if(i % 2 == 0)
    {
      char upper = c - 32;
      write(1, &upper, 1);
    }
    else
    {
      write(1, &c, 1);
    }
    c--;
    i++;
  }
}

int main()
{

  revy_alphy();

  return 0;
}
