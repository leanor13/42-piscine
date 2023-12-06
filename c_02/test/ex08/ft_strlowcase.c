/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:41:58 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 19:42:05 by yioffe           ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	char	*original_pointer;

	original_pointer = str;
	while (*str != '\0')
	{
		if (ft_char_in_range(*str, 'A', 'Z'))
		{
			*str = *str + 32;
		}
		str ++;
	}
	return (original_pointer);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the sTring to LOWERcazize 980^(*^";
	char	str2[] = "This is the sTring to LOWERcazize 980^(*^";

	printf("original string:\n%s\n", str);
	printf("transformed string:\n%s\n", ft_strlowcase(str2));
}
*/
