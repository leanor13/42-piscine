/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:46:51 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/02 11:58:03 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	power_of_10(int pw)
{
	int	i;
	int	num;

	i = pw;
	num = 1;
	while (i > 0)
	{
		num = num * 10;
		i --;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	int		digit_counter;
	int		num;
	int		i;
	int		j;
	char	current_print;

	num = nb;
	digit_counter = 1;
	while (num / 10 >= 1)
	{
		digit_counter ++;
		num = num / 10;
	}
	i = digit_counter;
	num = nb;
	while (i > 0)
	{
		current_print = num / power_of_10(i - 1) + '0';
		num = num % power_of_10(i - 1);
		i --;
		write(1, &current_print, 1);
	}
}
