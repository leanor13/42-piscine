/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:28:26 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/10 11:38:39 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("0 number: %d\n", ft_fibonacci(0));
	printf("1 number: %d\n", ft_fibonacci(1));
	printf("10 number: %d\n", ft_fibonacci(10));
	printf("-1 number: %d\n", ft_fibonacci(-1));
	printf("-3 number: %d\n", ft_fibonacci(-3));
}*/
