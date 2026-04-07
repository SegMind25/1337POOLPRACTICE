// The Laziest Way :)

#include <unistd.h>

void ft_print_numbers(void)
{
  write(1, "0123456789\n", 11);
}

//int main()
//{
//  ft_print_numbers();
//  return 0;
//}
