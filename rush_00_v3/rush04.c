/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrito- <mabrito-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:33:43 by mabrito-          #+#    #+#             */
/*   Updated: 2023/09/03 17:43:09 by yioffe           ###   ########.fr       */
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
	ft_putchar('\n');
}

void	choose_line_type(int x, int y, int line_num)
{
	if (line_num == 0)
	{
		ft_construct_line(x, 'A', 'B', 'C');
	}
	else if (line_num == y - 1 && y > 1)
	{
		ft_construct_line(x, 'C', 'B', 'A');
	}
	else
	{
		ft_construct_line(x, 'B', ' ', 'B');
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
		choose_line_type(x, y, line_number);
		line_number++;
	}
}
