/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:55:52 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 16:53:06 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("of 0: %d\n", ft_is_prime(0));
        printf("of 1: %d\n", ft_is_prime(1));
        printf("of 5: %d\n", ft_is_prime(2));
        printf("of 9: %d\n", ft_is_prime(9));
	printf("previous before biggest int: %d\n", ft_is_prime(6700417));
        printf("of biggest int %d\n", ft_is_prime(2147483647));
}*/
