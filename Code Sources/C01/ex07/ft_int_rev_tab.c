void ft_int_rev_tab(int *tab, int size)
{
  int temp;
  int start;
  int end;

  start = 0;
  end = size - 1;

  while(start < end)
  {
    temp = tab[start];
    tab[start] = tab[end];
    tab[end] = temp;

    start++;
    end--;
  }
}

#include <stdio.h>

int main()
{
  int i = 0;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10;

  ft_int_rev_tab(arr, size);

  while(i < size)
  {
    printf("%d", arr[i]);
    i++;
  }
  return 0;
}
