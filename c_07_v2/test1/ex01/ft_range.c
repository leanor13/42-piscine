/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:55:09 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/12 12:27:23 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	arr_length;
	int	i;

	if (min >= max)
		return (NULL);
	arr_length = max - min;
	arr = (int *)malloc(arr_length * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < arr_length)
	{
		arr[i] = min + i;
		i ++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*a;
	int	*b;

	a = ft_range(-2147483648, -2147483646);
	b = ft_range(-2, 2);
	printf("first elem: %d, last elem: %d\n", a[0], a[1]);
	printf("first elem: %d, last elem: %d\n", b[0], b[3]);
}*/
