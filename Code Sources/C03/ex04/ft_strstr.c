/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:21:17 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/03 15:53:31 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

static	int	match(char *str, char *to_find)
{
	while (*to_find)
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
	}
	return (1);
}

static	char	*find_start(char *str, char *to_find)
{
	while (*str)
	{
		if (match(str, to_find))
		{
			return (str);
		}
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	return (find_start(str, to_find));
}
// int main() {
//     char str[] = "Hello, world!";
//     char to_find[] = "world";
//     char *result;

//     result = ft_strstr(str, to_find);

//     if (result) {
//         printf("Found '%s' in '%s': %s\n", to_find, str, result);
//     } else {
//         printf("'%s' not found in '%s'\n", to_find, str);
//     }

//     return 0;
// }
