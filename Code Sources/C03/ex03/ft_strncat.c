/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:07:23 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/03 15:54:14 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb) 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main() {
//     char dest[50] = "Hello, ";
//     char src[] = "world!";
//     unsigned int nb = 5;

//     printf("Before strncat: %s\n", dest);
//     ft_strncat(dest, src, nb); 
//     printf("After strncat (3 chars): %s\n", dest);

//     char dest2[50] = "Hello, ";
//     ft_strncat(dest2, src, 10); 
//     printf("After strncat (10 chars): %s\n", dest2);

//     return 0;
// }
