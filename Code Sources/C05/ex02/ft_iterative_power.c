/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:37:26 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/10 15:43:37 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main() {
//     // Test cases
//     printf("2^3 = %d\n", ft_iterative_power(2, 3));
// Should print 8
//     printf("5^0 = %d\n",ft_iterative_power(5, 0));
// Should print 1
//     printf("0^5 = %d\n",ft_iterative_power(0, 5));
// Should print 0
//     printf("0^0 = %d\n",ft_iterative_power(0, 0));
// Should print 1
//     printf("3^-2 = %d\n",ft_iterative_power(3, -2));
// Should print 0

//     return 0;
// }
