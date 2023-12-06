/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:58:28 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/19 11:22:48 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	ft_conv_digit_base(int d, char *base)
{
	char	c;

	c = base[d];
	return (c);
}

int	numb_convert(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i ++;
	}
	return (-1);
}

int	validator(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] <= 32 || base[i] > 126)
			return (0);
		j = 0;
		while (base[j])
		{
			if (j != i && base[i] == base[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			sign;
	long int	curr;
	int			base_num;

	if (validator(base) != 1)
		return (0);
	sign = 1;
	curr = 0;
	base_num = ft_strlen(base);
	while ((*str < 14 && *str > 8) || *str == 32)
		str ++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str ++;
	}
	while (numb_convert(*str, base) >= 0 && *str != '\0')
	{
		curr = base_num * curr + numb_convert(*str, base);
		str ++;
	}
	return (sign * curr);
}
