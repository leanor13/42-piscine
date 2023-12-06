/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:25:22 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/08 12:34:50 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_c(char c)
{
	write(1, &c, 1);
}

void	ft_print_digit(int i)
{
	char	c;

	c = i + '0';
	ft_print_c(c);
}

void	ft_putnbr(int i)
{
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (i < 0)
	{
		ft_print_c('-');
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_print_digit(i % 10);
}

int	main(void)
{
	ft_putnbr(0);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
}
