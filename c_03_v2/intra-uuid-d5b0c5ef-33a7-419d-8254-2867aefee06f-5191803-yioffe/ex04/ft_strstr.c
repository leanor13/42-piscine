/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:09:10 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/20 16:19:47 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0')
			j ++;
		if (to_find[j] == '\0')
			return (str + i);
		i ++;
		j = 0;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	to_find[] = "needle";
	char	str1[] = "this is the neele for sewingneed";
	char	str2[] = "this is the needle";

	printf("original: %s\nanswer: %s\n", str1, ft_strstr(str1,to_find));
	printf("original: %s\nanswer: %s\n", str1, strstr(str1,to_find));
	printf("original: %s\nanswer: %s\n", str2, ft_strstr(str2,to_find));
	printf("original: %s\nanswer: %s\n", str2, strstr(str2,to_find));

}*/
