/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:03:08 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 19:04:50 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_in_range(char c, int begin_range, int end_range)
{
	if (c >= begin_range && c <= end_range)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_in_range(*str, 'A', 'Z'))
			str ++;
		else if (*str == 0)
			str ++;
		else 
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string1[]="ZA";
	char	string2[]="";
	char	string3[]="fhjdhjhfkaAjnkjn";

	printf("String: %s\nReturn: %d\n", string1, ft_str_is_uppercase(string1));
	printf("String: %s\nReturn: %d\n", string2, ft_str_is_uppercase(string2));
	printf("String: %s\nReturn: %d\n", string3, ft_str_is_uppercase(string3));
}*/
