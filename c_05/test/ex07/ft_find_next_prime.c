/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:56:15 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 17:21:09 by yioffe           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	guess;

	guess = nb;
	if (nb <= 1)
		return (2);
	if (ft_is_prime(guess) == 1)
		return (guess);
	if (guess % 2 == 0)
		return (ft_find_next_prime(guess + 1));
	return (ft_find_next_prime(guess + 2));
}
/*
#include <stdio.h>
int     main(void)
{
        printf("of 0: %d\n", ft_find_next_prime(0));
        printf("of 1: %d\n", ft_find_next_prime(1));
        printf("of 5: %d\n", ft_find_next_prime(5));
        printf("of 9: %d\n", ft_find_next_prime(9));
	printf("of -5: %d\n", ft_find_next_prime(-5));
	printf("previous before big 6700416: %d\n", ft_find_next_prime(6700416));
        printf("of biggest int: %d\n", ft_find_next_prime(2147483647));
	printf("close to biggest int %d\n", ft_find_next_prime(2147483644));
}
*/
