/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:03:54 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/05 10:57:36 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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

//     printf("Before strcat: %s\n", dest);
//     ft_strcat(dest, src);
//     printf("After strcat: %s\n", dest);

//     char dest2[50] = "42 ";
//     char src2[] = "Network";
//     printf("Before strcat: %s\n", dest2);
//     ft_strcat(dest2, src2);
//     printf("After strcat: %s\n", dest2);

//     char dest3[50] = "Hello";
//     printf("Before strcat: %s\n", dest3);
//     ft_strcat(dest3, dest3);
//     printf("After strcat: %s\n", dest3);

//     return 0;
// }
