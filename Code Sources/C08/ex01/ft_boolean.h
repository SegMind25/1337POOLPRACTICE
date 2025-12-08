#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum {
    FALSE = 0,
    TRUE = 1
} t_bool;

# define EVEN(n) ((n) % 2 == 0)
# define ODD(n) ((n) % 2 != 0)

# define SUCCESS 0
# define FAILURE 1

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

void    ft_putstr(char *str);

#endif
