/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:50:10 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/12 20:51:06 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length ++;
	return (length);
}

int	str_str_len(char **str, char *sep, int size)
{
	int		length;
	int		i;
	char	*curr;

	length = 0;
	i = 0;
	while (*str != NULL && i < size)
	{
		curr = *str;
		while (*curr != '\0')
		{
			length ++;
			curr ++;
		}
		str ++;
		i ++;
		if (i != size - 1)
			length += str_len(sep);
	}
	return (length);
}

char	*concat(char *dest, char *str, char *sep)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
		dest ++;
	while (*str != '\0')
	{
		*dest = *str;
		dest ++;
		str ++;
	}
	while (*sep != '\0')
	{
		*dest = *sep;
		dest ++;
		sep ++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*j_str;
	char	*j_str_pointer;
	int		j_size;
	int		i;

	j_size = str_str_len(strs, sep, size);
	j_str = (char *)malloc(j_size * sizeof(char) + 1);
	j_str_pointer = j_str;
	i = 0;
	while (i < size - 1)
	{
		j_str = concat(j_str, *strs, sep);
		strs ++;
		i ++;
	}
	if (i == size - 1)
		j_str = concat(j_str, *strs, "");
	return (j_str_pointer);
}
/*
#include <stdio.h>
int	main(void)
{
	int		size = 3;
	char	*sep = "!!!";
	char	*result;
	char	*strs[] = {
		"hello",
		"muy",
		"noooo",
		"this is jjjj",
		"finallll"
	};

	result = ft_strjoin(size, strs, sep);
	printf("final string: \n%s\n", result);
	free(result);
}*/
