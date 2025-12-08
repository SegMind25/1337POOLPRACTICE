/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:03:15 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/06 12:31:41 by melbakka         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// int main() {
//     printf("Next prime >= %d is %d\n", 0, ft_find_next_prime(0)); 
//     // Output: 2
//     printf("Next prime >= %d is %d\n", 1, ft_find_next_prime(1)); 
//     // Output: 2
//     printf("Next prime >= %d is %d\n", 2, ft_find_next_prime(2)); 
//     // Output: 2
//     printf("Next prime >= %d is %d\n", 3, ft_find_next_prime(3));
//     // Output: 3
//     printf("Next prime >= %d is %d\n", 4, ft_find_next_prime(4));
//        // Output: 5
//     printf("Next prime >= %d is %d\n", 14, ft_find_next_prime(14));
//     // Output: 17
//     printf("Next prime >= %d is %d\n", 20, ft_find_next_prime(20));
//     // Output: 23
//     return 0;
// }
