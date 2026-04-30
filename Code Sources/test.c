#include <stdio.h>

int main()
{
  char *str = "Hello";

  str = "World";

  printf("%s", &str);


  return 0;
}
