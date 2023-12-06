/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:02:39 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/04 13:03:19 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b == 0)
	{
		write(1, "Can't divide by 0\n", 18);
		return ;
	}
	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	a_char;
	char	b_char;

	a = 9;
	b = 0;
	ft_ultimate_div_mod(&a, &b);
	a_char = a + '0';
	b_char = b + '0';
	write(1, &a_char, 1);
	write(1, &b_char, 1);
	return (0);
}*/
