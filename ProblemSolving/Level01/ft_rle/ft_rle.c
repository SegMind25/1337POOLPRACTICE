#include <unistd.h>

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

void ft_rle(char *str)
{
    int i;
    int count;

    i = 0;
    while (str[i])
    {
        count = 1;
        while (str[i] == str[i + count])
            count++;
        ft_putnbr(count);
        write(1, &str[i], 1);
        i += count;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(2, "Usage: ./ft_rle <string>\n", 25);
        return (1);
    }
    ft_rle(argv[1]);
    write(1, "\n", 1);
    return (0);
}
