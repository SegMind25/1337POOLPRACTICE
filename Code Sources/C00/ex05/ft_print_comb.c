#include <unistd.h>

void ft_print_comb(void)
{
  int i, j, k = 0;
  while(i <= 7)
  {
    j = i + 1;
    while(j <= 8)
    {
      k = j + 1;
      while(k <= 9)
      {
        write(1, &"0123456789"[i], 1);
        write(1, &"0123456789"[j], 1);
        write(1, &"0123456789"[k], 1);

        if(!(i == 7 && j == 8 && k == 9))
        {
          write(1, ", ", 2);
        }
        k++;
      }
      j++;
    }
    i++;
  }
  write(1, "\n", 1);
}

int main()
{
  ft_print_comb();
}
