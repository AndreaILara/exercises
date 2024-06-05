/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:19:09 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/02 19:19:12 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	check_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	

	char str[] = "     ";
	ft_str_is_printable(str);
	return (0);
}*/
