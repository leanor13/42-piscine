/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:51:32 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 16:01:56 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	length;
	char			*start_dest;

	length = 0;
	start_dest = dest;
	while (length < n && *src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
		length ++;
	}
	*dest = '\0';
	return (start_dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	source[] = "Hello, C language!\n";
	char	destination[10];
	int	n;

	n = 8;
	ft_strncpy(destination, source, n);
	printf("Source:\n%sDestination (with length %d):\n%s", source, n, destination);
	return (0);
}*/
