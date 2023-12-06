/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:54:52 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/11 20:32:12 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_len(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length ++;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = ft_str_len(src);
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i ++;
	}
	dest[i] = '\0';
	return (src_length);
}
/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "source";
	char	destination[] = "Hi I am dest";
	unsigned int	n;
	
	n = 6;
	n = ft_strlcpy(destination, source, n + 1);
	printf("Source:\n%s\n", source);
	printf("Destination (with length %u):\n%s", n, destination);
	return 0;
}*/
