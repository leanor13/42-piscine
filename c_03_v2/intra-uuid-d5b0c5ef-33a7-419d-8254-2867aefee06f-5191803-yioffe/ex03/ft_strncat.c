/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:00:16 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/07 12:32:28 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
	{
		dest ++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest ++;
		src ++;
		nb --;
	}
	*dest = '\0';
	return (original_dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "hey";
	char	str2[] = "is it a";
	char    str3[] = "hey";
        char    str4[] = "is it a";

	printf("str1: %s\nstr2: %s\nresult: %s\n",str1,str2,ft_strncat(str1,str2,4));
	printf("%s\n", strncat(str3, str4,4));
}*/
