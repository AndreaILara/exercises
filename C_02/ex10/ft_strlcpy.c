/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 09:51:23 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/06/03 09:51:26 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (src[counter])
		counter++;
	if (size < 1)
		return (counter);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}

/*int	main(void)
{
	char			dest[30];
	unsigned int	size;

	char src[] = "Hola desde 42 Madrid";
	size = 22;
	ft_strlcpy(dest, src, size);
	write(1, dest, size);
	return (0);
}*/
