/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:22:21 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/10 12:42:12 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
// int main() {
//     // Test cases
//     printf("2^3 = %d\n", ft_recursive_power(2, 3));
// Should print 8
//     printf("5^0 = %d\n", ft_recursive_power(5, 0));
// Should print 1
//     printf("0^5 = %d\n", ft_recursive_power(0, 5));
// Should print 0
//     printf("0^0 = %d\n", ft_recursive_power(0, 0));
// Should print 1
//     printf("3^-2 = %d\n", ft_recursive_power(3, -2));
// Should print 0

//     return 0;
// }
