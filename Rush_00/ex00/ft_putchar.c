/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubal-c <mrubal-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:46:29 by mrubal-c          #+#    #+#             */
/*   Updated: 2024/05/25 18:06:23 by mrubal-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char left, char mid, char right)
{
	int	colum;

	colum = 1;
	if (x > 0)
	{
		write(1, &left, 1);
	}
	while (colum < x - 1)
	{
		write(1, &mid, 1);
		colum++;
	}
	if (x > 1)
	{
		write(1, &right, 1);
	}
}
