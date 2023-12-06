/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:03:23 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/08 10:36:05 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == 32 || (c > 8 && c < 14));
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == 45 || c == 43);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		number;

	while (is_space(*str))
		str ++;
	sign = 1;
	while (is_sign(*str))
	{
		if (*str == '-')
			sign = sign * (-1);
		str ++;
	}
	number = 0;
	while (is_number(*str))
	{
		number = 10 * number + (*str - '0');
		str ++;
	}
	return (sign * number);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("result: %d\n", ft_atoi(argv[1]));
	}
	else
		printf("\n");
	return (0);
}*/
