/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:45:37 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/06 15:39:12 by yioffe           ###   ########.fr       */
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

int	ft_is_lowercase(char c)
{
	if (ft_char_in_range(c, 'a', 'z'))
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if (ft_char_in_range(c, 'A', 'Z'))
		return (1);
	else
		return (0);
}

int	ft_is_a_letter(char c)
{
	if (ft_is_lowercase(c) || ft_is_uppercase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*original_pointer;
	char	*next_char;

	original_pointer = str;
	while (*(str + 1) != '\0')
	{
		next_char = str + 1;
		if (str == original_pointer && ft_is_lowercase(*str))
			*str = *str - 32;
		else if (ft_is_a_letter(*str) != 1 \
				&& ft_char_in_range(*str, '0', '9') != 1)
		{
			if (ft_is_lowercase(*next_char))
				*next_char = *next_char - 32;
		}
		else if (ft_is_uppercase(*next_char))
			*next_char = *next_char + 32;
		str ++;
	}
	return (original_pointer);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "t";
	char	str2[] = "t";
	char    str3[] = "salut, comm+ent tu vas ? 42mots quarante-deu";
        char    str4[] = "salut, comm+ent tu vas ? 42mots quarante-deu";


	printf("original string:\n%s\n", str);
	printf("transformed string:\n%s\n", ft_strcapitalize(str2));
	printf("original string:\n%s\n", str3);
        printf("transformed string:\n%s\n", ft_strcapitalize(str4));
}
