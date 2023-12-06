/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:03:55 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/19 18:24:06 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*save_str(char *str, int beginning, int end)
{
	int		len;
	int		i;
	char	*res;

	len = end - beginning;
	res = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		res[i] = str[beginning + i];
		i ++;
	}
	res[i] = '\0';
	return (res);
}

int	char_in_str(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str ++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	len;

	len = 0;
	while (char_in_str(charset, *str))
		str ++;
	while (*str)
	{
		while (*str && !char_in_str(charset, *str))
			str ++;
		len ++;
		while (*str && char_in_str(charset, *str))
			str ++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_res;
	int		len;
	int		i;
	int		j;
	int		begin;

	len = count_strings(str, charset);
	split_res = (char **)malloc((len + 1) * sizeof(char *));
	if (split_res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len)
	{
		while (char_in_str(charset, str[i]))
			i ++;
		begin = i;
		while (str[i] && !char_in_str(charset, str[i]))
			i ++;
		split_res[j] = save_str(str, begin, i);
		j ++;
	}
	split_res[j] = NULL;
	return (split_res);
}
/*
int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("WWWwwwW", "Ww");
	i = 0;
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i ++;
	}
	free(res);
}*/
