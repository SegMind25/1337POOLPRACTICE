/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:07:26 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/10 13:05:26 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int		i;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
// int main() {
//     printf("Square root of %d is %d\n", 0, ft_sqrt(0));  
//     // Output: 0
//     printf("Square root of %d is %d\n", 1, ft_sqrt(1)); 
//     // Output: 1
//     printf("Square root of %d is %d\n", 4, ft_sqrt(4));
//     // Output: 2
//     printf("Square root of %d is %d\n", 9, ft_sqrt(9)); 
//     // Output: 3
//     printf("Square root of %d is %d\n", 16, ft_sqrt(16));
//     // Output: 4
//     printf("Square root of %d is %d\n", 25, ft_sqrt(25)); 
//     // Output: 5
//     printf("Square root of %d is %d\n", 26, ft_sqrt(26)); 
//     // Output: 0 (not a perfect square)
//     printf("Square root of %d is %d\n", -4, ft_sqrt(-4)); 
//     // Output: 0 (negative number)
//     return 0;
// }
