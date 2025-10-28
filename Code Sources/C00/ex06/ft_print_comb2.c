#include <unistd.h>

void ft_print_comb2(void)
{
  int i, j = 0;
  while(i <= 98)
  {
    j = i + 1;
    while(j <= 99)
    {
      write(1, &"0123456789"[i / 10], 1);
      write(1, &"0123456789"[i % 10], 1);

      write(1, " ", 1);

      write(1, &"0123456789"[j / 10], 1);
      write(1, &"0123456789"[j % 10], 1);

      if(!(i == 98 && j == 99))
      {
        write(1, ", ", 2);
      }
      j++;
    }
    i++;
  }
  write(1, "\n", 1);
}

int main()
{
  ft_print_comb2();
}
