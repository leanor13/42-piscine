/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:34:49 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/17 18:36:13 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_ptstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_put_digit(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nb_l;

	nb_l = nb;
	if (nb_l < 0)
	{
		write(1, "-", 1);
		nb_l = -nb_l;
	}
	if (nb_l > 9)
	{
		ft_putnbr(nb_l / 10);
	}
	ft_put_digit(nb_l % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par -> str != 0)
	{
		ft_ptstr(par -> str);
		write(1, "\n", 1);
		ft_putnbr(par -> size);
		write(1, "\n", 1);
		ft_ptstr(par -> copy);
		write(1, "\n", 1);
		par ++;
	}
}
