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

  int a = 2;
  int b = 6;

  ft_swap(&a, &b);

  printf("Number A is : %d\nNumber Of B is : %d\n" , a, b);

  return 0;
}
