/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:14:36 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 19:42:56 by yioffe           ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	char	*original_pointer;

	original_pointer = str;
	while (*str != '\0')
	{
		if (ft_char_in_range(*str, 'a', 'z'))
		{
			*str = *str - 32;
		}
		str ++;
	}
	return (original_pointer);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is the sTring to CAPItalize 980^(*^";
	char	str2[] = "This is the sTring to CAPItalize 980^(*^";

	printf("original string:\n%s\n", str);
	printf("transformed string:\n%s\n", ft_strupcase(str2));
}
*/
