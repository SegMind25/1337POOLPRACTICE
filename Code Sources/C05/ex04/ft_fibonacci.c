/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:47:30 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/10 12:51:36 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main() {
//     printf("Fibonacci of %d is %d\n", 0, ft_fibonacci(0));
// Output: 0
//     printf("Fibonacci of %d is %d\n", 1, ft_fibonacci(1));
// Output: 1
//     printf("Fibonacci of %d is %d\n", 2, ft_fibonacci(2));
// Output: 1
//     printf("Fibonacci of %d is %d\n", 3, ft_fibonacci(3));
// Output: 2
//     printf("Fibonacci of %d is %d\n", 4, ft_fibonacci(4));
// Output: 3
//     printf("Fibonacci of %d is %d\n", 5, ft_fibonacci(5));
// Output: 5
//     printf("Fibonacci of %d is %d\n", 6, ft_fibonacci(6));
// Output: 8
//     printf("Fibonacci of %d is %d\n", 7, ft_fibonacci(7));
// Output: 13
//     return 0;
// }
