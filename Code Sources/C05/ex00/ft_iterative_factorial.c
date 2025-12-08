/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:04:23 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/10 12:15:02 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb --;
	}
	return (result);
}

// int main() {
//     printf("Factorial of 5 is: %d\n", ft_iterative_factorial(5));
// Should print 120
//     printf("Factorial of 6 is: %d\n", ft_iterative_factorial(6));
// Should print 720
//     printf("Factorial of 0 is: %d\n", ft_iterative_factorial(0));
// Should print 1
//     printf("Factorial of -1 is: %d\n", ft_iterative_factorial(-1));
// Should print 0
//     return 0;
// }
