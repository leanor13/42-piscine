/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:51:38 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/03 18:48:37 by yioffe           ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap_needed;
	int	i;

	swap_needed = 1;
	while (swap_needed > 0)
	{
		swap_needed = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swipe(&tab[i], &tab[i + 1]);
				swap_needed = 1;
			}
			i ++;
		}
	}
}

/*int	main(void)
{
	int		num[5] = {3, 5, -1, 0, -9};
	int		length;
	int		i;

	length = 5;
	ft_sort_int_tab(num, length);
	i = 0;
	while (i < length)
	{
		if (num[i] >= 0)
		{
			char c = num[i] + '0';
			write(1, &c, 1);
		}
		else
		{
			char c = - num[i] + '0';
			write(1, "-", 1);
			write(1, &c, 1);

		}
		write(1, ",", 1);
		i ++;
	}
	return (0);
}*/
