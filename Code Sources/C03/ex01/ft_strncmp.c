/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:40:56 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/04 13:59:58 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

// int main()
// {
//     char str1[] = "Hell, world!";
//     char str2[] = "Hello, World!";
//     unsigned int n = 7;
//     int result;
// 	int k=0;

//     result = ft_strncmp(str1, str2, n);
// 	k = strncmp(str1, str2, n);	
// 	printf("%d\n",k);
// 	printf("%d",result);

//     return 0;
// }
