/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:36:57 by yioffe            #+#    #+#             */
/*   Updated: 2023/09/09 19:10:45 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	**ft_fill()
{
	char	**matrix;
	int	i;
	int	j;
	char	count;

	i = 0;
	matrix = (char **)malloc(16);
	count = 'a';
	while (i < 4)
	{
		j = 0;
		matrix[i] = (char *)malloc(4);
		while (j < 4)
		{
			matrix[i][j] = count;
			count ++;
			j ++;
		}
		i ++;
	}

	return (matrix);
}

void	write_matrix(char **matr)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &matr[i][j], 1);
			write(1, " ", 1);
			j ++;
		}
		write(1, "\n", 1);
		i ++;
	}

}

char	*ft_create_border(char *str)
{
	char	*one_line;
	int	i;

	one_line = (char *)malloc(16);
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			one_line[i / 2] = str[i];
			//printf("elem num %d, elem value %d \n", (i/2), one_line[i/2]);
		}
		i ++;
	}
	return (one_line);
}

void 	ft_matrix_fin(char *one_line, char **matrix)
{
	int i;


	i = 0;
	while (one_line[i])
	{
		while (i < 4)
		{
			if (one_line[i] == '4')
			{
				matrix[0][i] = '1';
				matrix[1][i] = '2';
				matrix[2][i] = '3';
				matrix[3][i] = '4';
			}

			if (one_line[i] == '1')
			{
				matrix[0][i] = '4';
			}
			i++;
		}
		while (i < 8)
		{
			if (one_line[i] == '4')
			{
				matrix[3][i - 4] = '1';
				matrix[2][i - 4] = '2';
				matrix[1][i - 4] = '3';
				matrix[0][i - 4] = '4';
			}

			if (one_line[i] == '1')
			{
				matrix[3][i - 4] = '4';
			}
			i++;
		}
		while (i < 12)
		{
			if (one_line[i] == '4')
			{
				matrix[i - 8][0] = '1';
				matrix[i - 8][1] = '2';
				matrix[i - 8][2] = '3';
				matrix[i - 8][3] = '4';
			}

			if (one_line[i] == '1')
			{
				matrix[i - 8][0] = '4';
			}
			i++;
		}
		while (i < 16)
		{
			if (one_line[i] == '4')
			{
				matrix[i - 12][3] = '1';
				matrix[i - 12][2] = '2';
				matrix[i - 12][1] = '3';
				matrix[i - 12][0] = '4';
			}

			if (one_line[i] == '1')
			{
				matrix[i - 12][3] = '4';
			}
			i++;
		}
	}
}

void ft_chek(char *one_line, char **matrix)
{
	
}

int	ft_input_check(char *str)
{
	// check length of str
	// check that only numbers and spaces
	// check numbers in range (1;4)
	// check order (int - space - int ...)

	return (1);
}

int	main(int argc, char **argv)
{
	char	**matr;
	char	*line;

	if (argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	else
	{
		ft_input_check(argv[1]);
	}

	line = ft_create_border(argv[1]);
	matr = ft_fill();
	ft_matrix_fin(line, matr);
	write_matrix(matr);
	int i = 0;
	while (i < 4)
	{
		free(matr[i]);
		i++;
	}
	free(matr);

	return (0);

	//printf("0 element: %d \n", *(elem + 1));
}
