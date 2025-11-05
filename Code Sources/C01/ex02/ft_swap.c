#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a = 25;
  int b = 10;

  ft_swap(&a, &b);

  printf("The Swap is : %d and %d", a, b);
}
