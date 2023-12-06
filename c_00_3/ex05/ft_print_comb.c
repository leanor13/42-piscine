/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:49:06 by yioffe            #+#    #+#             */
/*   Updated: 2023/08/31 15:46:12 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char		i; 
	char		j;
	char		k;

	i = 48;
	while (i < 56)
	{
		j = i + 1;
		while (j < 57)
		{
			k = j + 1;
			while (k < 58)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (i == 55 && j == 56 && k == 57)
					break ;
				write(1, ", ", 2);
				k ++;
			}
			j ++;
		}
		i ++;
	}
}
