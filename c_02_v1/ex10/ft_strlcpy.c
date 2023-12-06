/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:54:52 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/06 11:27:01 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*start_dest;
	unsigned int	remaining;
	unsigned int	source_length;

	start_dest = dest;
	remaining = size - 1;
	source_length = 0;
	while (remaining > 0 && *src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
		remaining --;
		source_length ++;
	}
	while (remaining > 0)
	{
		*dest = '\0';
		dest ++;
		remaining --;
	}
	*dest = '\0';
	return (source_length);
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
