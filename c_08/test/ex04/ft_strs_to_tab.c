/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:30:08 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/17 12:36:58 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strcpy(char *str)
{
	char	*cpy;
	int	i;

	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i ++;
	}
	return (cpy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*new_av;

	new_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (new_av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		new_av[i].str = av[i];
		new_av[i].size = ft_strlen(av[i]);
		new_av[i].copy = ft_strcpy(av[i]);
		i ++;
	}
	new_av[i].str = 0;
	return (new_av);
}
