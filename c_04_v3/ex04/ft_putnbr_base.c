/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:22:39 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/15 12:59:37 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit_base(int d, char *base)
{
	char	c;

	c = base[d];
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
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
		else if (base[i] < 32 || base[i] > 126)
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

void	ft_putnbr_base(int nbr, char *base)
{
	long int	curr;
	int			power;

	if (!validator(base))
		return ;
	curr = nbr;
	power = ft_strlen(base);
	if (curr < 0)
	{
		write(1, "-", 1);
		curr *= -1;
	}
	if (curr < power)
		ft_putdigit_base(curr, base);
	else
	{
		ft_putnbr_base(curr / power, base);
		ft_putdigit_base(curr % power, base);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-128, "f ");
	return (0);
}*/
