/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:53:41 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/01 19:54:14 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define GRID_SIZE 9

int	validate_clues(int argc, char **argv, int *clues)
{
	int	index;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	index = 0;
	while (index < 16)
	{
		if (argv[1][index * 2] < '1' || argv[1][index * 2] > '4' || (index < 15
				&& argv[1][index * 2 + 1] != ' '))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		clues[index] = argv[1][index * 2] - '0';
		index++;
	}
	return (0);
}

void	initialize_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int	row;
	int	col;

	row = 0;
	while (row < GRID_SIZE)
	{
		col = 0;
		while (col < GRID_SIZE)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < GRID_SIZE)
	{
		col = 0;
		while (col < GRID_SIZE)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < GRID_SIZE - 1)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[GRID_SIZE][GRID_SIZE];

	if (validate_clues(argc, argv, clues))
	{
		return (1);
	}
	initialize_grid(grid);
	print_grid(grid);
	return (0);
}
