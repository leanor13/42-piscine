/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:15:38 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/03 18:50:03 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	swipe(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swipe(&tab[i], &tab[j]);
		i ++;
		j --;
	}
}
/*
int	main(void)
{
	int	num[5] = {2, 4, 4, 6, 3};
	int	length;

	length = 5;
	ft_rev_int_tab(num, length);
	for (int i = 0; i < length; i++)
	{
		char c = num[i] + '0';
		write(1, &c, 1);
	}
	return (0);
}*/
