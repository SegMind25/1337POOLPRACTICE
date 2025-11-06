void ft_sort_int_tab(int *tab, int size)
{
  int i;
  int j;
  int temp;

  i = 0;
  while(i < size)
  {
    j = i + 1;
    while(j < size)
    {
      if(tab[i] > tab[j])
      {
        int temp;

        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
      j++;
    }
    i++;
  }
}

#include <stdio.h>

int main()
{
  int tab[] = {1, 5, 10, 20, 5, 0, 6, 8};
  int size = 8;

  ft_sort_int_tab(tab, size);

  int i = 0;
  while(i < size)
  {
    printf("%d ", tab[i]);
    i++;
  }
  return 0;
}
