/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:30:44 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 16:54:25 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	current;

	if (power < 0)
		return (0);
	current = 1;
	while (power > 0)
	{
		current *= nb;
		power --;
	}
	return (current);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(2, 3));
        printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, -1));
}*/
