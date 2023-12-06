/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:42:30 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/03 18:52:44 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str ++;
	}
}
/*
int	main(void)
{
	char	my_string[] = "Hey this is a nice string\n";
	char	my_empty_string[] = "   ";

	ft_putstr(my_string);
	ft_putstr(my_empty_string);
	return (0);
}*/
