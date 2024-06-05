/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 08:52:21 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/05 08:52:24 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	tens;
	int	ones;

	if (i < 10)
	{
		putchar('0');
		putchar(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		putchar(tens + '0');
		putchar(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char(i);
			putchar(' ');
			int_to_char(j);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
}
