/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:13:03 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/03 18:58:16 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int     main(void)
{
        int     one;
        int     two;
        char    c1;
        char    c2;

        one = 1;
        two = 5;
        ft_swap(&one, &two);
        c1 = one + '0';
        c2 = two + '0';
        write(1, "expected: 51\n", 13);
        write(1, &c1, 1);
        write(1, &c2, 1);
        return(0);
}*/
