/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:01:44 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 08:55:46 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length ++;
	}
	return (length);
}
/*
int	main(void)
{
	char	my_string[] = "Hey 6\n";
	char	my_empty_string[] = "";
	char	c;

	c = ft_strlen(my_string) + '0';
	write(1, &c, 1);
	c = ft_putstr(my_empty_string) + '0';
	write(1, &c, 1);
	return (0);
}*/
