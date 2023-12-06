/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:56:39 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/18 19:54:27 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len ++;
	return (len);
}

int	ft_full_size(int size, char **strs, char *sep)
{
	int	join_size;
	int	i;

	join_size = 0;
	i = 0;
	while (size > 1)
	{
		join_size += ft_strlen(strs[i]) + ft_strlen(sep);
		i ++;
		size --;
	}
	if (size == 1)
		join_size += ft_strlen(strs[i]);
	join_size += 1;
	return (join_size);
}

char	*ft_strcat(char *dest, char *str)
{
	char	*or;

	or = dest;
	while (*dest)
		dest ++;
	while (*str)
	{
		*dest = *str;
		dest ++;
		str ++;
	}
	*dest = '\0';
	return (or);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	join = (char *)malloc(sizeof(char) * ft_full_size(size, strs, sep));
	if (join == NULL)
		return (NULL);
	*join = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i ++;
	}
	return (join);
}
/*
int	main(int ac, char **av)
{
	char	*result;

	result = ft_strjoin((ac - 1), av, av[ac -1]);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}*/
