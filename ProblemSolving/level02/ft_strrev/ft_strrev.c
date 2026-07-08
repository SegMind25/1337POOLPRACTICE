#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str)
{

  int i;
  int j;
  int temp;

  i = 0;
  j = 0;
  while(str[j])
  {
    j++;
  }
  i--;

  while(i < j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;

    i++;
    j--;
  }

  write(1, "\n", 1);
  return str;
}

int main()
{

  char str[] = "Hello World !";

  printf("%s", ft_strrev(str));

  return 0;
}
