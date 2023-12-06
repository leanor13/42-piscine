/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:03:22 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/11 13:03:32 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i ++;
	return (str1[i] - str2[i]);
}

char	**ft_sort_strings(char **strings, int str_num)
{
	int		i;
	int		j;
	char	*curr;

	i = 1;
	while (i < str_num)
	{
		curr = strings[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(strings[j], curr) > 0)
		{
			strings[j + 1] = strings[j];
			j --;
		}
		strings[j + 1] = curr;
		i ++;
	}
	return (strings);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**input_strings;

	input_strings = argv + 1;
	ft_sort_strings(input_strings, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(input_strings[i]);
		i ++;
	}
}
