/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:25:16 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/08 10:20:54 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
        write(1, "\n", 1);
}*/
