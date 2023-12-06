/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:04:48 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 16:13:51 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);
{
		
}

#include <stdio.h>
int	main(void)
{
	char	string1[]="4SteriDKFs2e34skf";
	char	string2[]="";
	char	string3[]="347893248792";

	printf("String: %s\nReturn: %d", string1, ft_str_is_numeric(string1));
	printf("String: %s\nReturn: %d", string2, ft_str_is_numeric(string2));
	printf("String: %s\nReturn: %d", string3, ft_str_is_numeric(string3));
}
