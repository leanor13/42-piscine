/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:49:09 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/07 12:35:12 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
	{
		dest ++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (original_dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "hey";
	char	str2[] = "is it a";

	printf("str1: %s\nstr2: %s\nresult: %s\n", str1, str2, ft_strcat(str1, str2));
}*/
