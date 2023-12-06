/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:54:35 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/07 13:09:09 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length ++;
		str ++;
	}
	return (length);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		write(1, "no string", 9);
	else
	{
		i = 1;
		while (i < argc)
		{
			printf("%d\n", ft_strlen(argv[i]));
			printf("expected: %lu\n", strlen(argv[i]));
			i ++;
		}
	}
	return (0);
}*/
