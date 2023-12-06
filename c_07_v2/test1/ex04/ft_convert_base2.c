/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:01:15 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/19 17:23:34 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		validator(char *base);
int		ft_strlen(char *str);
int		ft_atoi_base(char *str, char *base);
char	ft_conv_digit_base(int d, char *base);

int	num_length(int nbr)
{
	int	length;

	length = 1;
	if (nbr < 0)
	{
		length ++;
		nbr *= -1;
	}
	while (nbr > 10)
	{
		length ++;
		nbr = nbr / 10;
	}
	return (length);
}

void	append_char(char *str, char c)
{
	while (*str)
		str ++;
	*str = c;
	*(str + 1) = '\0';
}

void	append_str(char *str1, char *str2)
{
	while (*str1)
		str1++;
	while (*str2)
	{
		*str1 = *str2;
		str1 ++;
		str2 ++;
	}
	*str1 = '\0';
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long int	curr;
	int			power;
	char		*str_num;
	char		*rec_result;

	if (!validator(base))
		return (NULL);
	str_num = (char *)malloc((num_length(nbr) + 1) * sizeof(char));
	if (str_num == NULL)
		return (NULL);
	*str_num = '\0';
	power = ft_strlen(base);
	curr = nbr;
	if (curr < 0)
	{
		append_char(str_num, '-');
		curr *= -1;
	}
	if (curr >= power)
	{
		rec_result = ft_putnbr_base(curr / power, base);
		append_str(str_num, rec_result);
	}
	append_char(str_num, ft_conv_digit_base(curr % power, base));
	return (str_num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*conv_numb;
	int		conv_dec;

	if (!validator(base_from) || !validator(base_to))
		return (NULL);
	conv_dec = ft_atoi_base(nbr, base_from);
	conv_numb = ft_putnbr_base(conv_dec, base_to);
	return (conv_numb);
}
/*
int	main(void)
{
	char	*r;

	r = ft_convert_base("2323", "012341", "0123456789");
	printf("%s\n", r);
	free(r);
	return (0);
}*/
