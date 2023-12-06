/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:37 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/11 20:03:02 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_in_range(char c, int begin_range, int end_range)
{
	return (c >= begin_range && c <= end_range);
}

int	ft_is_lowercase(char c)
{
	return (ft_char_in_range(c, 'a', 'z'));
}

int	ft_is_uppercase(char c)
{
	return (ft_char_in_range(c, 'A', 'Z'));
}

int	ft_is_a_letter(char c)
{
	return (ft_is_lowercase(c) || ft_is_uppercase(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !((ft_is_a_letter(str[i - 1]) 
					|| ft_char_in_range(str[i - 1], '0', '9'))))
		{
			if (ft_is_lowercase(str[i]))
				str[i] -= 32;
		}
		else
		{
			if (ft_is_uppercase(str[i]))
				str[i] += 32;
		}
		i ++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "KBh8g#emya5@hyc";
	char	str2[] = "KBh8g#emya5@hyc";
	char    str3[] = "st, c	omm+e tu vas ? 42mots quAnte-deu";
        char    str4[] = "st, c	omm+e tu vas ? 42mots quAnte-deu";

	printf("original string:\n%s\n", str);
	printf("transformed string:\n%s\n", ft_strcapitalize(str2));
	printf("original string:\n%s\n", str3);
        printf("transformed string:\n%s\n", ft_strcapitalize(str4));
}*/
