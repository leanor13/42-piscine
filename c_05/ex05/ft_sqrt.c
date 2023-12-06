/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:41:09 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 15:54:47 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sq_guess(int nb, int guess)
{
	if (guess > 46340 || nb < 1)
		return (0);
	if (guess * guess == nb)
		return (guess);
	if (guess * guess > nb)
		return (0);
	return (ft_sq_guess(nb, guess + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sq_guess(nb, 1));
}
/*
#include <stdio.h>
int     main(void)
{
        printf("of 0: %d\n", ft_sqrt(0));
        printf("of -4: %d\n", ft_sqrt(-1));
        printf("of 5: %d\n", ft_sqrt(5));
        printf("of 9: %d\n", ft_sqrt(9));
        printf("of biggest int %d\n", ft_sqrt(2147483647));
        printf("of biggest int sq (46340): %d\n", ft_sqrt(2147395600));
}
*/
