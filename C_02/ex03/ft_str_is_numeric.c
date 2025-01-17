/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:29:06 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/02 18:29:10 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{

	char str[] = "11111111111aaaaaa";
	ft_str_is_numeric(str);
	return (0);
}*/
