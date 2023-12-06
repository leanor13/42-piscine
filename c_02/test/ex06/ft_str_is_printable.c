/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:07:30 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 19:11:37 by yioffe           ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_in_range(*str, 0, 31) == 0)
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
	char	string1[2];
	char	string2[]="";
	char	string3[]="fhjdhjhfkaAjnkjn";

	string1[0] = 16;
	string1[0] = 31;
	printf("String: %s\nReturn: %d\n", string1, ft_str_is_printable(string1));
	printf("String: %s\nReturn: %d\n", string2, ft_str_is_printable(string2));
	printf("String: %s\nReturn: %d\n", string3, ft_str_is_printable(string3));
}*/
