/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:36:40 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/03 15:52:45 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

static	unsigned	int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main() {
//     char dest[50] = "Hello, ";
//     char src[] = "world!";
//     unsigned int size = 50;

//     printf("Before strlcat: '%s'\n", dest);
//     unsigned int result = ft_strlcat(dest, src, size);
//     printf("After strlcat: '%s'\n", dest);
//     printf("Length of concatenated string: %u\n", result);

//     return 0;
// }
