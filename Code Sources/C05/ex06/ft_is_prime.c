/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:44:04 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/06 11:01:54 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

// int main() {
//     printf("Is %d prime? %d\n", 1, ft_is_prime(1));
//     // Output: 0
//     printf("Is %d prime? %d\n", 2, ft_is_prime(2));
//     // Output: 1
//     printf("Is %d prime? %d\n", 3, ft_is_prime(3));
//     // Output: 1
//     printf("Is %d prime? %d\n", 4, ft_is_prime(4));
//     // Output: 0
//     printf("Is %d prime? %d\n", 5, ft_is_prime(6));
//        // Output: 0
//     printf("Is %d prime? %d\n", 9, ft_is_prime(9));
//     // Output: 0
//     printf("Is %d prime? %d\n", 11, ft_is_prime(11));
//     // Output: 1
//     return 0;
// }
