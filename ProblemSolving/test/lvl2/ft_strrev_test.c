#include <unistd.h>

void ft_putstr(char *str)
{
  while(*str)
  {
    write(1, str++, 1);
  }
}

char *ft_strrev(char *str)
{

  int start;
  int end;
  char temp;

  start = 0;
  end = 0;

  while(str[end])
  {
    end++;
  }
  end--;

  while(start < end)
  {
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    start++;
    end--;
  }

  return str;
}

int main()
{

  char str[] = "hello";

  ft_strrev(str);

  ft_putstr(str);

  return 0;
}
