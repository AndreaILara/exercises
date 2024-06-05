/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubal-c <mrubal-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:46:13 by mrubal-c          #+#    #+#             */
/*   Updated: 2024/05/26 18:47:04 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char left, char mid, char right);

int	errorchecker(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "That's not possible!", 20);
		return (-1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	row;

	if (errorchecker(x, y) == -1)
		return ;
	row = 1;
	if (x > 0 && y > 0)
	{
		ft_putchar(x, 'o', '-', 'o');
		write(1, "\n", 1);
	}
	while (x > 0 && row < y - 1)
	{
		ft_putchar(x, '|', ' ', '|');
		write(1, "\n", 1);
		row++;
	}
	if (y > 1)
	{
		ft_putchar(x, 'o', '-', 'o');
		write(1, "\n", 1);
	}
}
