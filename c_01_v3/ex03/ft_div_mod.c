/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:24:58 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/04 13:00:31 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		write(1, "Can't divide by 0\n", 18);
		return ;
	}
	*div = a / b;
	*mod = a % b;
}

/*
int     main(void)
{
        int             div;
        int             mod;
        char    div_char;
        char    mod_char;

        div = 7;
        mod = 8;
        ft_div_mod(10, 0, &div, &mod);
        div_char = div + '0';
        mod_char = mod + '0';
        write(1, &div_char, 1);
        write(1, &mod_char, 1);
}*/
