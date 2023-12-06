/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:21:06 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/20 16:55:34 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_l;
	unsigned int	src_l;

	i = 0;
	j = 0;
	dest_l = ft_strlen(dest);
	j = dest_l;
	src_l = ft_strlen(src);
	if (size == 0 || size <= dest_l)
		return (src_l + size);
	while (src[i] != '\0' && i < size - dest_l - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_l + src_l);
}
/*
int main(void)
{
    char dest[20]; // Destination buffer
    char ft_dest[20]; // Destination buffer for ft_strlcat
    char *src; // Source string
    unsigned int size; // Size of the destination buffer

    // Test cases

    // Test 1: Destination buffer is empty, should copy the entire source string
    src = "Hello";
    size = 10;
    ft_dest[0] = '\0'; // Initialize ft_dest as an empty string
    printf("Test 1:\n");
    printf("Custom ft_strlcat: %u\n", ft_strlcat(ft_dest, src, size));
    printf("Result: %s\n\n", ft_dest);

    // Test 2: Destination buffer is too small to fit the entire source string
    src = "World";
    size = 5;
    strcpy(dest, "Hello");
    strcpy(ft_dest, "Hello");
    printf("Test 2:\n");
    printf("Custom ft_strlcat: %u\n", ft_strlcat(ft_dest, src, size));
    printf("Result: %s\n\n", ft_dest);

    // Test 3: Destination buffer has exactly enough space to fit both strings
    src = "World";
    size = 11;
    strcpy(dest, "Hello");
    strcpy(ft_dest, "Hello");
    printf("Test 3:\n");
    printf("Custom ft_strlcat: %u\n", ft_strlcat(ft_dest, src, size));
    printf("Result: %s\n\n", ft_dest);

    return 0;
}*/
