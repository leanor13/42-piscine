/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:43:55 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/12 11:52:04 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len ++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char		*str_new;
	int			src_len;
	int			i;

	src_len = ft_strlen(src);
	str_new = (char *)malloc(src_len * sizeof(char) + 1);
	if (str_new == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str_new[i] = src[i];
		i ++;
	}
	str_new[i] = '\0';
	return (str_new);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*a;
	char	*b;
	char	*n = "UEUE nff bfbkbskdjbf";

	a = strdup(n);
	b = ft_strdup(n);
	printf("real %s, my %s", a, b);
	free(a);
	free(b);
}*/
