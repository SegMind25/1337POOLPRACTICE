#!/bin/sh

# Compile source files into object files
gcc -c ft_putchar.c
gcc -c ft_swap.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c

# Create the library archive
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Clean up object files
rm -f *.o

