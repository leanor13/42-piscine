/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:45:02 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/07 11:45:37 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "A";
	char	str4[] = "Hello!F";

	printf("s1: %s\ns2: %s\nresult:%d\n", str, str2, ft_strcmp(str,str2));
	printf("%d\n", strcmp(str,str2));
	printf("s1: %s\ns2: %s\nresult:%d\n", str, str3, ft_strcmp(str,str3));
	printf("%d\n", strcmp(str,str3));
	printf("s1: %s\ns2: %s\nresult:%d\n", str, str4, ft_strcmp(str,str4));
	printf("%d\n", strcmp(str,str4));
	return (0);
}*/
