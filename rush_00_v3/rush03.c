/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:33:43 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/03 16:33:49 by mabrito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_construct_line(int x, char begin_char, char mid_char, char end_char)
{
	int	i;

	if (x > 0)
	{
		ft_putchar(begin_char);
	}
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(mid_char);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(end_char);
	}
}

void	rush(int x, int y)
{
	int	line_number;

	if (x < 0 || y < 0)
	{
		write(1, "Both width and length should be positive integers\n", 50);
		return ;
	}
	if (x == 0 || y == 0)
	{
		return ;
	}
	line_number = 0;
	while (line_number < y)
	{
		if (line_number == 0 || line_number == y - 1)
		{
			ft_construct_line(x, 'A', 'B', 'C');
		}
		else
		{
			ft_construct_line(x, 'B', ' ', 'B');
		}
		line_number++;
		ft_putchar('\n');
	}
}
