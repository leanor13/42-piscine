/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:39:48 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/09 20:44:47 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d\n", ft_recursive_power(0, 0));
        printf("%d\n", ft_recursive_power(0, 3));
        printf("%d\n", ft_recursive_power(2, 3));
        printf("%d\n", ft_recursive_power(2, 1));
        printf("%d\n", ft_recursive_power(2, 0));
        printf("%d\n", ft_recursive_power(2, -1));
}*/
