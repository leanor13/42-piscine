/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yioffe <yioffe@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:29:14 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/12 17:45:54 by yioffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i ++;
	}
	return (max - min);
}
/*
#include <stdio.h>
int main()
{
    int *arr = NULL;
    int size;

    // Test case 1: Valid range
    int min1 = 5;
    int max1 = 10;
    size = ft_ultimate_range(&arr, min1, max1);
    if (size == -1)
    {
        printf("Test case 1: Memory allocation failed\n");
    }
    else if (size == 0)
    {
        printf("Test case 1: Invalid range (min >= max)\n");
    }
    else
    {
        printf("Test case 1: Valid range size: %d\n", size);
        printf("Elements in range: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    }

    // Test case 2: Invalid range
    int min2 = 10;
    int max2 = 5;
    size = ft_ultimate_range(&arr, min2, max2);
    if (size == -1)
    {
        printf("Test case 2: Memory allocation failed\n");
    }
    else if (size == 0)
    {
        printf("Test case 2: Invalid range (min >= max)\n");
    }
    else
    {
        printf("Test case 2: Valid range size: %d\n", size);
        printf("Elements in range: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    }

    return 0;
}*/
