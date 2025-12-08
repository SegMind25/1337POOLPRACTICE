/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:57:59 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/04 11:27:30 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:57:59 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/04 10:56:14 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

static int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

static int	get_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	result = 0;
	i = skip_whitespace(str, i);
	sign = get_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// int main()
// {
//     printf("%d\n", ft_atoi(" ---+--+1234ab567")); // should print -1234
//     printf("%d\n", ft_atoi("   +42"));            // should print 42
//     printf("%d\n", ft_atoi(" -+- 78"));           // should print 78
//     printf("%d\n", ft_atoi(" -0"));               // should print 0
//     printf("%d\n", ft_atoi("2147483647"));        // should print 2147483647
//     printf("%d\n", ft_atoi("-2147483648"));       // should print -2147483648

//     return 0;
// }
