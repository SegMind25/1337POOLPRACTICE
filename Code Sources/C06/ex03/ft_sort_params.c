#include <unistd.h>

void	swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void	sort_argv_recursive(int argc, char *argv[], int start)
{
    if (start >= argc - 1)
        return;

    int i = start + 1;
    while (i < argc)
    {
        if (strcmp(argv[start], argv[i]) > 0)
        {
            swap(&argv[start], &argv[i]);
        }
        i++;
    }
    sort_argv_recursive(argc, argv, start + 1);
}

void	ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str++, 1);
    }
}

void	print_args_recursive(int argc, char *argv[], int index)
{
    if (index >= argc)
        return;

    ft_putstr(argv[index]);
    write(1, "\n", 1);
    print_args_recursive(argc, argv, index + 1);
}

int		main(int argc, char *argv[])
{
    if (argc < 2)
        return (0);

    sort_argv_recursive(argc, argv, 1);
    print_args_recursive(argc, argv, 1);

    return (0);
}
