/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:33:42 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/12 21:11:16 by yioffe           ###   ########.fr       */
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

void	print_unprintable(char c)
{
	int			dec;
	char		hex[4];
	char		*hex_dict;

	dec = (int) c;
	hex_dict = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = hex_dict[dec / 16];
	hex[2] = hex_dict[dec % 16];
	hex[3] = '\0';
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_char_in_range(*str, 0, 31) || ft_char_in_range(*str, 127, 255))
			print_unprintable(*str);
		else
			write(1, str, 1);
		str ++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
        //char    str4[] = "dfsdf\as";
	char	str2[] = "Hello\x7FWord";

	ft_putstr_non_printable(str);
	ft_putstr_non_printable(str2);
	return (0);
}*/
