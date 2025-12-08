/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:17:12 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/10 12:23:55 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// int main() {
//     printf("Factorial of 5 is: %d\n", ft_recursive_factorial(5));
// Should print 120
//     printf("Factorial of 0 is: %d\n",ft_recursive_factorial(0));
// Should print 1
//     printf("Factorial of -1 is: %d\n",ft_recursive_factorial(-1));
// Should print 0
//     return 0;
// }
