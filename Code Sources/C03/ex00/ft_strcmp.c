/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:24:26 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/04 12:49:02 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main (){
//     char str1[] = "hello";
//     char str2[] = "hello";
//     char str3[] = "world";
//     char str4[] = "hell";

//     printf("Comparing '%s' and '%s': %d\n", str1, str2,
//     ft_strcmp(str1, str2));
//     printf("Comparing '%s' and '%s': %d\n"
//     , str1, str3, ft_strcmp(str1, str3));
//     printf("Comparing '%s' and '%s': %d\n"
//     , str1, str4, ft_strcmp(str1, str4));
//     printf("Comparing '%s' and '%s': %d\n", 
//     str3, str4, ft_strcmp(str3, str4));

//     return 0;
// }
