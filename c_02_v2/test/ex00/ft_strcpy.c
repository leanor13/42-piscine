/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:04:54 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/05 20:52:00 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (original_dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	destination[100];
	char	source[] = "original string \nwith numbers 879879";

	ft_strcpy(destination, source);
	printf("source: %s \n destination: %s", source, destination);
}
*/
